#ifndef TIDYSQ_SQ_H
#define TIDYSQ_SQ_H

#include "tidysq/types/general.h"
#include "tidysq/types/Alphabet.h"
#include "tidysq/types/TypeMapper.h"
#include "tidysq/util/alphabet.h"
#include "tidysq/ops/OperationUnpack.h"
#include "tidysq/sqapply.h"

namespace tidysq {
    template<InternalType INTERNAL, ProtoType PROTO>
    class ProtoSq;

    template<InternalType INTERNAL>
    class Sq {
        typename InternalTypeMapper<INTERNAL>::SqContentType content_;
        Alphabet alphabet_;
        SqType type_;
    public:
        typedef typename InternalTypeMapper<INTERNAL>::SqContentType ContentType;
        typedef typename InternalTypeMapper<INTERNAL>::SqElementType ElementType;
        typedef typename InternalTypeMapper<INTERNAL>::SequenceContentType ElementUnderlyingType;
        typedef typename InternalTypeMapper<INTERNAL>::SqAccessType AccessType;
        typedef typename InternalTypeMapper<INTERNAL>::SqConstAccessType ConstAccessType;

        Sq(const ContentType &content, const Alphabet &alphabet, const SqType &type) :
                content_(content),
                alphabet_(alphabet),
                type_(type) {};

        Sq(const ContentType &content, const Alphabet &alphabet) :
                Sq(content, alphabet, util::guessSqType(alphabet)) {};

        Sq(const LenSq length, const Alphabet &alphabet, const SqType &type) :
                Sq(ContentType(length), alphabet, type) {};

        Sq(const Alphabet &alphabet, const SqType &type) :
                Sq(0, alphabet, type) {};

        Sq(const LenSq length, const SqType &type) :
                Sq(length, util::getStandardAlphabet(type), type) {};

        explicit Sq(const SqType &type) :
                Sq(util::getStandardAlphabet(type), type) {};

        Sq(const LenSq length, const Alphabet &alphabet) :
                Sq(length, alphabet, util::guessSqType(alphabet)) {};

        explicit Sq(const Alphabet& alphabet) :
                Sq(alphabet, util::guessSqType(alphabet)) {};

        AccessType inline operator[] (const LenSq index) {
            return content_[index];
        }

        ConstAccessType inline operator[] (LenSq index) const {
            return content_[index];
        }

        [[nodiscard]] inline ElementType get(const LenSq index) const {
            return content_[index];
        }

        inline void set(const LenSq index, const ElementType &value) {
            content_[index] = value;
        }

        [[nodiscard]] LenSq length() const {
            return content_.size();
        }

        [[nodiscard]] inline const Alphabet& alphabet() const {
            return alphabet_;
        }

        [[nodiscard]] inline const SqType& type() const {
            return type_;
        }

        inline void pushBack(const ElementType &sequence) {
            content_.push_back(sequence);
        }

        inline Rcpp::List exportToR() {
            throw std::exception();
        }

        inline bool operator==(const Sq<INTERNAL> &other) {
            if ((alphabet_ != other.alphabet_) || (content_.size() != other.content_.size())) return false;
            for (LenSq i = 0; i < content_.size(); i++) {
                if (!Rcpp::is_true(Rcpp::all(ElementUnderlyingType(content_[i]) == ElementUnderlyingType(other.content_[i])))) return false;
            }
            return true;
        }

        inline bool operator!=(const Sq<INTERNAL> &other) {
            return !operator==(other);
        }

        template<InternalType INTERNAL_OUT, ProtoType PROTO_OUT>
        ProtoSq<INTERNAL_OUT, PROTO_OUT> unpack() {
            return sqapply<Sq<INTERNAL>, ProtoSq<INTERNAL_OUT, PROTO_OUT>>(*this, ops::OperationUnpack<INTERNAL, INTERNAL_OUT, PROTO_OUT>());
        }
    };

    template<>
    inline Rcpp::List Sq<RCPP>::exportToR() {
        content_.attr("alphabet") = static_cast<Rcpp::StringVector>(alphabet_);
        content_.attr("class") = util::getClassStringVector(type_);
        for (LenSq i = 0; i < length(); i++) {
            content_[i] = static_cast<Rcpp::RawVector>(content_[i]);
        }
        return content_;
    }

    inline Sq<RCPP> importFromR(const Rcpp::List &sq) {
        if (!sq.hasAttribute("alphabet")) throw std::exception();
        return Sq<RCPP>(sq, Alphabet(sq.attr("alphabet")));
    }
}

#endif //TIDYSQ_SQ_H
