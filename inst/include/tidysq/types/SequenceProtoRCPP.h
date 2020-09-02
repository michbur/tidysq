#ifndef TIDYSQ_SEQUENCEPROTORCPP_H
#define TIDYSQ_SEQUENCEPROTORCPP_H

#include <Rcpp.h>

#include "general.h"
#include "SequenceProtoSTD.h"

namespace tidysq {
    template<>
    class SequenceProto<RCPP, RAWS> : public Rcpp::RawVector {
        using Rcpp::RawVector::RawVector;
    };

    template<>
    class SequenceProto<RCPP, INTS> : public Rcpp::IntegerVector {
        using Rcpp::IntegerVector::IntegerVector;
    };

    template<>
    class SequenceProto<RCPP, STRINGS> : public Rcpp::StringVector {
        using Rcpp::StringVector::StringVector;
    };

    template<>
    class SequenceProto<RCPP, STRING> : public Rcpp::String {
    public:
        using Rcpp::String::String;

        [[nodiscard]] SequenceProto<STD, STRING> toSequenceProtoSTD() const {
            return SequenceProto<STD, STRING>(get_cstring());
        }

        static SequenceProto <STD, STRING> steal(const SequenceProto <STD, STRING> &proto) {
            return SequenceProto<STD, STRING>(proto);
        }
    };
}

#endif //TIDYSQ_SEQUENCEPROTORCPP_H
