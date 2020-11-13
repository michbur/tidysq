#ifndef TIDYSQ_PROTOSQ_H
#define TIDYSQ_PROTOSQ_H

#include "tidysq/types/general.h"
#include "tidysq/types/Alphabet.h"
#include "tidysq/types/TypeMapper.h"
#include "tidysq/sqapply.h"
#include "tidysq/ops/OperationPack.h"
#include "tidysq/types/Proxy.h"

namespace tidysq {
    template<InternalType INTERNAL>
    class Sq;

    template<InternalType INTERNAL, ProtoType PROTO>
    inline typename ProtoSq<INTERNAL, PROTO>::ContentType export_to_R(const ProtoSq<INTERNAL, PROTO> &proto_sq);

    template<InternalType INTERNAL, ProtoType PROTO>
    class ProtoSq {
        typename TypeMapper<INTERNAL, PROTO>::ProtoSqContentType content_;
        Alphabet alphabet_;
    public:
        typedef typename TypeMapper<INTERNAL, PROTO>::ProtoSqContentType ContentType;
        typedef typename TypeMapper<INTERNAL, PROTO>::ProtoSqElementType ElementType;

        ProtoSq(const ContentType &content, const Alphabet &alphabet) :
                content_(content),
                alphabet_(alphabet) {};

        ProtoSq(const LenSq length, const Alphabet &alphabet) :
                ProtoSq(ContentType(length), alphabet) {};

        ProtoSq(const ContentType &content, const SqType &type) :
                ProtoSq(length, Alphabet(type)) {};

        ProtoSq(const LenSq length, const SqType &type) :
                ProtoSq(length, Alphabet(type)) {};

        inline ProtoSequenceProxy<INTERNAL, PROTO> operator[](const LenSq index) {
            return ProtoSequenceProxy<INTERNAL, PROTO>(content_[index]);
        }

        inline ProtoSequenceConstProxy<INTERNAL, PROTO> operator[](const LenSq index) const {
            return ProtoSequenceConstProxy<INTERNAL, PROTO>(content_[index]);
        }

        [[nodiscard]] inline LenSq length() const {
            return content_.size();
        }

        [[nodiscard]] inline const Alphabet &alphabet() const {
            return alphabet_;
        }

        inline Alphabet& alphabet() {
            return alphabet_;
        }

        [[nodiscard]] inline const SqType &type() const {
            return alphabet_.type();
        }

        template<InternalType INTERNAL_OUT>
        Sq<INTERNAL_OUT> pack() {
            return sqapply<ProtoSq<INTERNAL, PROTO>, Sq<INTERNAL_OUT>>(*this,
                                                                       ops::OperationPack<INTERNAL, PROTO, INTERNAL_OUT>());
        }

        inline bool operator==(const ProtoSq<INTERNAL, PROTO> &other) {
           if ((alphabet_ != other.alphabet_) || (content_.size() != other.content_.size())) return false;
           for (LenSq i = 0; i < content_.size(); i++) {
               if ((*this)[i] != other[i]) return false;
           }
           return true;
        }

        inline bool operator!=(const ProtoSq<INTERNAL, PROTO> &other) {
            return !operator==(other);
        }


        friend typename ProtoSq<INTERNAL, PROTO>::ContentType export_to_R<INTERNAL, PROTO>(const ProtoSq<INTERNAL, PROTO> &proto_sq);
    };


    template<>
    inline bool ProtoSq<RCPP, STRING>::operator==(const ProtoSq<RCPP, STRING> &other) {
        if ((alphabet_ != other.alphabet_) || (content_.size() != other.content_.size())) return false;
        for (LenSq i = 0; i < content_.size(); i++) {
            if ((*this)[i] != other[i]) return false;
        }
        return true;
    }


}

#endif //TIDYSQ_PROTOSQ_H
