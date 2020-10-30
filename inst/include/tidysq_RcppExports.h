// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef RCPP_tidysq_RCPPEXPORTS_H_GEN_
#define RCPP_tidysq_RCPPEXPORTS_H_GEN_

#include <Rcpp.h>

namespace tidysq {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("tidysq", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("tidysq", "_tidysq_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in tidysq");
            }
        }
    }

    inline Rcpp::CharacterVector C_get_real_alph(Rcpp::CharacterVector sq) {
        typedef SEXP(*Ptr_C_get_real_alph)(SEXP);
        static Ptr_C_get_real_alph p_C_get_real_alph = NULL;
        if (p_C_get_real_alph == NULL) {
            validateSignature("Rcpp::CharacterVector(*C_get_real_alph)(Rcpp::CharacterVector)");
            p_C_get_real_alph = (Ptr_C_get_real_alph)R_GetCCallable("tidysq", "_tidysq_C_get_real_alph");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_C_get_real_alph(Shield<SEXP>(Rcpp::wrap(sq)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Rcpp::CharacterVector >(rcpp_result_gen);
    }

}

#endif // RCPP_tidysq_RCPPEXPORTS_H_GEN_
