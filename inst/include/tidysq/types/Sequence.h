#ifndef TIDYSQ_SEQUENCE_H
#define TIDYSQ_SEQUENCE_H

#include "tidysq/types/general.h"

namespace tidysq {
    template<InternalType>
    class Sequence;
}

#include <RcppCommon.h>

namespace Rcpp {
    template<>
    SEXP wrap(const tidysq::Sequence<tidysq::RCPP> &);
}

#include "tidysq/types/TypeMapper.h"
#include "tidysq/types/ProtoSequence.h"

namespace tidysq {
    template<InternalType INTERNAL>
    class Sequence {
        typename InternalTypeMapper<INTERNAL>::SequenceContentType content_;
        LenSq originalLength_;
    public:

    public:
        typedef typename InternalTypeMapper<INTERNAL>::SequenceContentType ContentType;
        typedef typename InternalTypeMapper<INTERNAL>::SequenceElementType ElementType;
        typedef typename InternalTypeMapper<INTERNAL>::SequenceAccessType AccessType;
        typedef typename InternalTypeMapper<INTERNAL>::SequenceConstAccessType ConstAccessType;

        Sequence(const ContentType &content, const LenSq originalLength) :
                content_(content),
                originalLength_(originalLength) {};

        Sequence(const LenSq contentLength, const LenSq originalLength) :
                Sequence(ContentType(contentLength), originalLength) {};

        Sequence() :
                Sequence(0, 0) {};

        Sequence(const Sequence &other) noexcept = default;

        Sequence(Sequence &&other) noexcept = default;

        Sequence& operator=(const Sequence &other) noexcept = default;

        Sequence& operator=(Sequence &&other) noexcept = default;

        inline AccessType operator[](const LenSq index) {
            return content_[index];
        }

        inline ConstAccessType operator[](const LenSq index) const {
             return content_[index];
        }

        [[nodiscard]] inline LenSq originalLength() const {
            return originalLength_;
        }

        [[nodiscard]] inline LenSq length() const {
            return content_.size();
        }

        [[nodiscard]] inline ContentType getContent() const {
            return content_;
        }
    };
}

namespace Rcpp {
    template<>
    inline SEXP wrap(const tidysq::Sequence<tidysq::RCPP> &obj) {
        return obj.getContent();
    }
}

#endif //TIDYSQ_SEQUENCE_H
