// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// CPP_guess_standard_alph
Rcpp::StringVector CPP_guess_standard_alph(const Rcpp::StringVector& alph, const Rcpp::StringVector& NA_letter);
RcppExport SEXP _tidysq_CPP_guess_standard_alph(SEXP alphSEXP, SEXP NA_letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type alph(alphSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type NA_letter(NA_letterSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_guess_standard_alph(alph, NA_letter));
    return rcpp_result_gen;
END_RCPP
}
// CPP_obtain_alphabet
Rcpp::StringVector CPP_obtain_alphabet(const Rcpp::StringVector& x, const Rcpp::IntegerVector& sample_size, const Rcpp::StringVector& NA_letter);
RcppExport SEXP _tidysq_CPP_obtain_alphabet(SEXP xSEXP, SEXP sample_sizeSEXP, SEXP NA_letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type sample_size(sample_sizeSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type NA_letter(NA_letterSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_obtain_alphabet(x, sample_size, NA_letter));
    return rcpp_result_gen;
END_RCPP
}
// CPP_pack_RAWS
Rcpp::List CPP_pack_RAWS(const Rcpp::List& proto, const Rcpp::StringVector& alphabet, const Rcpp::StringVector& NA_letter);
RcppExport SEXP _tidysq_CPP_pack_RAWS(SEXP protoSEXP, SEXP alphabetSEXP, SEXP NA_letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type proto(protoSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type alphabet(alphabetSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type NA_letter(NA_letterSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_pack_RAWS(proto, alphabet, NA_letter));
    return rcpp_result_gen;
END_RCPP
}
// CPP_pack_INTS
Rcpp::List CPP_pack_INTS(const Rcpp::List& proto, const Rcpp::StringVector& alphabet, const Rcpp::StringVector& NA_letter);
RcppExport SEXP _tidysq_CPP_pack_INTS(SEXP protoSEXP, SEXP alphabetSEXP, SEXP NA_letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type proto(protoSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type alphabet(alphabetSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type NA_letter(NA_letterSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_pack_INTS(proto, alphabet, NA_letter));
    return rcpp_result_gen;
END_RCPP
}
// CPP_pack_STRINGS
Rcpp::List CPP_pack_STRINGS(const Rcpp::List& proto, const Rcpp::StringVector& alphabet, const Rcpp::StringVector& NA_letter);
RcppExport SEXP _tidysq_CPP_pack_STRINGS(SEXP protoSEXP, SEXP alphabetSEXP, SEXP NA_letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type proto(protoSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type alphabet(alphabetSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type NA_letter(NA_letterSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_pack_STRINGS(proto, alphabet, NA_letter));
    return rcpp_result_gen;
END_RCPP
}
// CPP_pack_STRING
Rcpp::List CPP_pack_STRING(const Rcpp::StringVector& proto, const Rcpp::StringVector& alphabet, const Rcpp::StringVector& NA_letter);
RcppExport SEXP _tidysq_CPP_pack_STRING(SEXP protoSEXP, SEXP alphabetSEXP, SEXP NA_letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type proto(protoSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type alphabet(alphabetSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type NA_letter(NA_letterSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_pack_STRING(proto, alphabet, NA_letter));
    return rcpp_result_gen;
END_RCPP
}
// CPP_unpack_RAWS
Rcpp::List CPP_unpack_RAWS(const Rcpp::List& sq, const Rcpp::StringVector& NA_letter);
RcppExport SEXP _tidysq_CPP_unpack_RAWS(SEXP sqSEXP, SEXP NA_letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type sq(sqSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type NA_letter(NA_letterSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_unpack_RAWS(sq, NA_letter));
    return rcpp_result_gen;
END_RCPP
}
// CPP_unpack_INTS
Rcpp::List CPP_unpack_INTS(const Rcpp::List& sq, const Rcpp::StringVector& NA_letter);
RcppExport SEXP _tidysq_CPP_unpack_INTS(SEXP sqSEXP, SEXP NA_letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type sq(sqSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type NA_letter(NA_letterSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_unpack_INTS(sq, NA_letter));
    return rcpp_result_gen;
END_RCPP
}
// CPP_unpack_STRINGS
Rcpp::List CPP_unpack_STRINGS(const Rcpp::List& sq, const Rcpp::StringVector& NA_letter);
RcppExport SEXP _tidysq_CPP_unpack_STRINGS(SEXP sqSEXP, SEXP NA_letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type sq(sqSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type NA_letter(NA_letterSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_unpack_STRINGS(sq, NA_letter));
    return rcpp_result_gen;
END_RCPP
}
// CPP_unpack_STRING
Rcpp::StringVector CPP_unpack_STRING(const Rcpp::List& sq, const Rcpp::StringVector& NA_letter);
RcppExport SEXP _tidysq_CPP_unpack_STRING(SEXP sqSEXP, SEXP NA_letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type sq(sqSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type NA_letter(NA_letterSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_unpack_STRING(sq, NA_letter));
    return rcpp_result_gen;
END_RCPP
}
// CPP_bite
Rcpp::List CPP_bite(const Rcpp::List& x, const Rcpp::IntegerVector& indices, const Rcpp::StringVector& NA_letter);
RcppExport SEXP _tidysq_CPP_bite(SEXP xSEXP, SEXP indicesSEXP, SEXP NA_letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type indices(indicesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type NA_letter(NA_letterSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_bite(x, indices, NA_letter));
    return rcpp_result_gen;
END_RCPP
}
// CPP_find_invalid_letters
Rcpp::List CPP_find_invalid_letters(const Rcpp::List& x, const Rcpp::StringVector& dest_type, const Rcpp::StringVector& NA_letter);
RcppExport SEXP _tidysq_CPP_find_invalid_letters(SEXP xSEXP, SEXP dest_typeSEXP, SEXP NA_letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type dest_type(dest_typeSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type NA_letter(NA_letterSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_find_invalid_letters(x, dest_type, NA_letter));
    return rcpp_result_gen;
END_RCPP
}
// CPP_find_motifs
Rcpp::List CPP_find_motifs(const Rcpp::List& x, const Rcpp::StringVector& names, const Rcpp::StringVector& motifs, const Rcpp::StringVector& NA_letter);
RcppExport SEXP _tidysq_CPP_find_motifs(SEXP xSEXP, SEXP namesSEXP, SEXP motifsSEXP, SEXP NA_letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type names(namesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type motifs(motifsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type NA_letter(NA_letterSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_find_motifs(x, names, motifs, NA_letter));
    return rcpp_result_gen;
END_RCPP
}
// CPP_has
Rcpp::LogicalVector CPP_has(const Rcpp::List& x, const Rcpp::StringVector& motifs, const Rcpp::StringVector& NA_letter);
RcppExport SEXP _tidysq_CPP_has(SEXP xSEXP, SEXP motifsSEXP, SEXP NA_letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type motifs(motifsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type NA_letter(NA_letterSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_has(x, motifs, NA_letter));
    return rcpp_result_gen;
END_RCPP
}
// CPP_translate
Rcpp::List CPP_translate(const Rcpp::List& x, const int& table, const Rcpp::StringVector& NA_letter, const bool& interpret_as_stop);
RcppExport SEXP _tidysq_CPP_translate(SEXP xSEXP, SEXP tableSEXP, SEXP NA_letterSEXP, SEXP interpret_as_stopSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const int& >::type table(tableSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type NA_letter(NA_letterSEXP);
    Rcpp::traits::input_parameter< const bool& >::type interpret_as_stop(interpret_as_stopSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_translate(x, table, NA_letter, interpret_as_stop));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP run_testthat_tests();

static const R_CallMethodDef CallEntries[] = {
    {"_tidysq_CPP_guess_standard_alph", (DL_FUNC) &_tidysq_CPP_guess_standard_alph, 2},
    {"_tidysq_CPP_obtain_alphabet", (DL_FUNC) &_tidysq_CPP_obtain_alphabet, 3},
    {"_tidysq_CPP_pack_RAWS", (DL_FUNC) &_tidysq_CPP_pack_RAWS, 3},
    {"_tidysq_CPP_pack_INTS", (DL_FUNC) &_tidysq_CPP_pack_INTS, 3},
    {"_tidysq_CPP_pack_STRINGS", (DL_FUNC) &_tidysq_CPP_pack_STRINGS, 3},
    {"_tidysq_CPP_pack_STRING", (DL_FUNC) &_tidysq_CPP_pack_STRING, 3},
    {"_tidysq_CPP_unpack_RAWS", (DL_FUNC) &_tidysq_CPP_unpack_RAWS, 2},
    {"_tidysq_CPP_unpack_INTS", (DL_FUNC) &_tidysq_CPP_unpack_INTS, 2},
    {"_tidysq_CPP_unpack_STRINGS", (DL_FUNC) &_tidysq_CPP_unpack_STRINGS, 2},
    {"_tidysq_CPP_unpack_STRING", (DL_FUNC) &_tidysq_CPP_unpack_STRING, 2},
    {"_tidysq_CPP_bite", (DL_FUNC) &_tidysq_CPP_bite, 3},
    {"_tidysq_CPP_find_invalid_letters", (DL_FUNC) &_tidysq_CPP_find_invalid_letters, 3},
    {"_tidysq_CPP_find_motifs", (DL_FUNC) &_tidysq_CPP_find_motifs, 4},
    {"_tidysq_CPP_has", (DL_FUNC) &_tidysq_CPP_has, 3},
    {"_tidysq_CPP_translate", (DL_FUNC) &_tidysq_CPP_translate, 4},
    {"run_testthat_tests", (DL_FUNC) &run_testthat_tests, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_tidysq(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
