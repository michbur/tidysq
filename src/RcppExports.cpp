// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/tidysq.h"
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// CPP_pack_RAWS
Rcpp::List CPP_pack_RAWS(Rcpp::List proto, Rcpp::StringVector alphabet, Rcpp::StringVector NA_letter);
RcppExport SEXP _tidysq_CPP_pack_RAWS(SEXP protoSEXP, SEXP alphabetSEXP, SEXP NA_letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type proto(protoSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type alphabet(alphabetSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type NA_letter(NA_letterSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_pack_RAWS(proto, alphabet, NA_letter));
    return rcpp_result_gen;
END_RCPP
}
// CPP_pack_INTS
Rcpp::List CPP_pack_INTS(Rcpp::List proto, Rcpp::StringVector alphabet, Rcpp::StringVector NA_letter);
RcppExport SEXP _tidysq_CPP_pack_INTS(SEXP protoSEXP, SEXP alphabetSEXP, SEXP NA_letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type proto(protoSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type alphabet(alphabetSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type NA_letter(NA_letterSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_pack_INTS(proto, alphabet, NA_letter));
    return rcpp_result_gen;
END_RCPP
}
// CPP_pack_STRINGS
Rcpp::List CPP_pack_STRINGS(Rcpp::List proto, Rcpp::StringVector alphabet, Rcpp::StringVector NA_letter);
RcppExport SEXP _tidysq_CPP_pack_STRINGS(SEXP protoSEXP, SEXP alphabetSEXP, SEXP NA_letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type proto(protoSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type alphabet(alphabetSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type NA_letter(NA_letterSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_pack_STRINGS(proto, alphabet, NA_letter));
    return rcpp_result_gen;
END_RCPP
}
// CPP_pack_STRING
Rcpp::List CPP_pack_STRING(Rcpp::StringVector proto, Rcpp::StringVector alphabet, Rcpp::StringVector NA_letter);
RcppExport SEXP _tidysq_CPP_pack_STRING(SEXP protoSEXP, SEXP alphabetSEXP, SEXP NA_letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type proto(protoSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type alphabet(alphabetSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type NA_letter(NA_letterSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_pack_STRING(proto, alphabet, NA_letter));
    return rcpp_result_gen;
END_RCPP
}
// CPP_unpack_RAWS
Rcpp::List CPP_unpack_RAWS(Rcpp::List sq, Rcpp::StringVector NA_letter);
RcppExport SEXP _tidysq_CPP_unpack_RAWS(SEXP sqSEXP, SEXP NA_letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sq(sqSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type NA_letter(NA_letterSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_unpack_RAWS(sq, NA_letter));
    return rcpp_result_gen;
END_RCPP
}
// CPP_unpack_INTS
Rcpp::List CPP_unpack_INTS(Rcpp::List sq, Rcpp::StringVector NA_letter);
RcppExport SEXP _tidysq_CPP_unpack_INTS(SEXP sqSEXP, SEXP NA_letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sq(sqSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type NA_letter(NA_letterSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_unpack_INTS(sq, NA_letter));
    return rcpp_result_gen;
END_RCPP
}
// CPP_unpack_STRINGS
Rcpp::List CPP_unpack_STRINGS(Rcpp::List sq, Rcpp::StringVector NA_letter);
RcppExport SEXP _tidysq_CPP_unpack_STRINGS(SEXP sqSEXP, SEXP NA_letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sq(sqSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type NA_letter(NA_letterSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_unpack_STRINGS(sq, NA_letter));
    return rcpp_result_gen;
END_RCPP
}
// CPP_unpack_STRING
Rcpp::StringVector CPP_unpack_STRING(Rcpp::List sq, Rcpp::StringVector NA_letter);
RcppExport SEXP _tidysq_CPP_unpack_STRING(SEXP sqSEXP, SEXP NA_letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sq(sqSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type NA_letter(NA_letterSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_unpack_STRING(sq, NA_letter));
    return rcpp_result_gen;
END_RCPP
}
// C_get_real_alph
Rcpp::CharacterVector C_get_real_alph(Rcpp::CharacterVector sq);
static SEXP _tidysq_C_get_real_alph_try(SEXP sqSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type sq(sqSEXP);
    rcpp_result_gen = Rcpp::wrap(C_get_real_alph(sq));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _tidysq_C_get_real_alph(SEXP sqSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_tidysq_C_get_real_alph_try(sqSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// CPP_bite
Rcpp::List CPP_bite(const Rcpp::List& x, const Rcpp::IntegerVector& indices);
RcppExport SEXP _tidysq_CPP_bite(SEXP xSEXP, SEXP indicesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type indices(indicesSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_bite(x, indices));
    return rcpp_result_gen;
END_RCPP
}
// CPP_find_invalid_letters
Rcpp::List CPP_find_invalid_letters(const Rcpp::List& x, const Rcpp::StringVector& dest_type);
RcppExport SEXP _tidysq_CPP_find_invalid_letters(SEXP xSEXP, SEXP dest_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type dest_type(dest_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_find_invalid_letters(x, dest_type));
    return rcpp_result_gen;
END_RCPP
}
// CPP_has
Rcpp::LogicalVector CPP_has(const Rcpp::List& x, const Rcpp::StringVector& motifs);
RcppExport SEXP _tidysq_CPP_has(SEXP xSEXP, SEXP motifsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type motifs(motifsSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_has(x, motifs));
    return rcpp_result_gen;
END_RCPP
}
// Cpp_translate
Rcpp::CharacterVector Cpp_translate(std::vector<std::string> sq, int table);
RcppExport SEXP _tidysq_Cpp_translate(SEXP sqSEXP, SEXP tableSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type sq(sqSEXP);
    Rcpp::traits::input_parameter< int >::type table(tableSEXP);
    rcpp_result_gen = Rcpp::wrap(Cpp_translate(sq, table));
    return rcpp_result_gen;
END_RCPP
}

// validate (ensure exported C++ functions exist before calling them)
static int _tidysq_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("Rcpp::CharacterVector(*C_get_real_alph)(Rcpp::CharacterVector)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _tidysq_RcppExport_registerCCallable() { 
    R_RegisterCCallable("tidysq", "_tidysq_C_get_real_alph", (DL_FUNC)_tidysq_C_get_real_alph_try);
    R_RegisterCCallable("tidysq", "_tidysq_RcppExport_validate", (DL_FUNC)_tidysq_RcppExport_validate);
    return R_NilValue;
}

RcppExport SEXP run_testthat_tests();

static const R_CallMethodDef CallEntries[] = {
    {"_tidysq_CPP_pack_RAWS", (DL_FUNC) &_tidysq_CPP_pack_RAWS, 3},
    {"_tidysq_CPP_pack_INTS", (DL_FUNC) &_tidysq_CPP_pack_INTS, 3},
    {"_tidysq_CPP_pack_STRINGS", (DL_FUNC) &_tidysq_CPP_pack_STRINGS, 3},
    {"_tidysq_CPP_pack_STRING", (DL_FUNC) &_tidysq_CPP_pack_STRING, 3},
    {"_tidysq_CPP_unpack_RAWS", (DL_FUNC) &_tidysq_CPP_unpack_RAWS, 2},
    {"_tidysq_CPP_unpack_INTS", (DL_FUNC) &_tidysq_CPP_unpack_INTS, 2},
    {"_tidysq_CPP_unpack_STRINGS", (DL_FUNC) &_tidysq_CPP_unpack_STRINGS, 2},
    {"_tidysq_CPP_unpack_STRING", (DL_FUNC) &_tidysq_CPP_unpack_STRING, 2},
    {"_tidysq_C_get_real_alph", (DL_FUNC) &_tidysq_C_get_real_alph, 1},
    {"_tidysq_CPP_bite", (DL_FUNC) &_tidysq_CPP_bite, 2},
    {"_tidysq_CPP_find_invalid_letters", (DL_FUNC) &_tidysq_CPP_find_invalid_letters, 2},
    {"_tidysq_CPP_has", (DL_FUNC) &_tidysq_CPP_has, 2},
    {"_tidysq_Cpp_translate", (DL_FUNC) &_tidysq_Cpp_translate, 2},
    {"_tidysq_RcppExport_registerCCallable", (DL_FUNC) &_tidysq_RcppExport_registerCCallable, 0},
    {"run_testthat_tests", (DL_FUNC) &run_testthat_tests, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_tidysq(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
