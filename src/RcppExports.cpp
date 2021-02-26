// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/tidysq.h"
#include <Rcpp.h>

using namespace Rcpp;

// CPP_apply_R_function
Rcpp::List CPP_apply_R_function(const Rcpp::List& x, const Rcpp::Function& fun, const bool& single_string, const tidysq::Letter& NA_letter);
RcppExport SEXP _tidysq_CPP_apply_R_function(SEXP xSEXP, SEXP funSEXP, SEXP single_stringSEXP, SEXP NA_letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Function& >::type fun(funSEXP);
    Rcpp::traits::input_parameter< const bool& >::type single_string(single_stringSEXP);
    Rcpp::traits::input_parameter< const tidysq::Letter& >::type NA_letter(NA_letterSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_apply_R_function(x, fun, single_string, NA_letter));
    return rcpp_result_gen;
END_RCPP
}
// CPP_bite
Rcpp::List CPP_bite(const Rcpp::List& x, const Rcpp::IntegerVector& indices, const tidysq::Letter& NA_letter, const std::string& on_warning);
RcppExport SEXP _tidysq_CPP_bite(SEXP xSEXP, SEXP indicesSEXP, SEXP NA_letterSEXP, SEXP on_warningSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type indices(indicesSEXP);
    Rcpp::traits::input_parameter< const tidysq::Letter& >::type NA_letter(NA_letterSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type on_warning(on_warningSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_bite(x, indices, NA_letter, on_warning));
    return rcpp_result_gen;
END_RCPP
}
// CPP_collapse
Rcpp::List CPP_collapse(const Rcpp::List& x, const tidysq::Letter& NA_letter);
RcppExport SEXP _tidysq_CPP_collapse(SEXP xSEXP, SEXP NA_letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const tidysq::Letter& >::type NA_letter(NA_letterSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_collapse(x, NA_letter));
    return rcpp_result_gen;
END_RCPP
}
// CPP_complement
Rcpp::List CPP_complement(const Rcpp::List& x, const tidysq::Letter& NA_letter);
RcppExport SEXP _tidysq_CPP_complement(SEXP xSEXP, SEXP NA_letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const tidysq::Letter& >::type NA_letter(NA_letterSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_complement(x, NA_letter));
    return rcpp_result_gen;
END_RCPP
}
// CPP_find_invalid_letters
Rcpp::List CPP_find_invalid_letters(const Rcpp::List& x, const std::string& dest_type, const tidysq::Letter& NA_letter);
RcppExport SEXP _tidysq_CPP_find_invalid_letters(SEXP xSEXP, SEXP dest_typeSEXP, SEXP NA_letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type dest_type(dest_typeSEXP);
    Rcpp::traits::input_parameter< const tidysq::Letter& >::type NA_letter(NA_letterSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_find_invalid_letters(x, dest_type, NA_letter));
    return rcpp_result_gen;
END_RCPP
}
// CPP_find_motifs
Rcpp::List CPP_find_motifs(const Rcpp::List& x, const std::vector<std::string>& names, const std::vector<tidysq::Letter>& motifs, const tidysq::Letter& NA_letter);
RcppExport SEXP _tidysq_CPP_find_motifs(SEXP xSEXP, SEXP namesSEXP, SEXP motifsSEXP, SEXP NA_letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type names(namesSEXP);
    Rcpp::traits::input_parameter< const std::vector<tidysq::Letter>& >::type motifs(motifsSEXP);
    Rcpp::traits::input_parameter< const tidysq::Letter& >::type NA_letter(NA_letterSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_find_motifs(x, names, motifs, NA_letter));
    return rcpp_result_gen;
END_RCPP
}
// CPP_get_standard_alphabet
Rcpp::StringVector CPP_get_standard_alphabet(const std::string& dest_type);
RcppExport SEXP _tidysq_CPP_get_standard_alphabet(SEXP dest_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type dest_type(dest_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_get_standard_alphabet(dest_type));
    return rcpp_result_gen;
END_RCPP
}
// CPP_guess_standard_alph
Rcpp::StringVector CPP_guess_standard_alph(const std::vector<std::string>& alph, const tidysq::Letter& NA_letter);
RcppExport SEXP _tidysq_CPP_guess_standard_alph(SEXP alphSEXP, SEXP NA_letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type alph(alphSEXP);
    Rcpp::traits::input_parameter< const tidysq::Letter& >::type NA_letter(NA_letterSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_guess_standard_alph(alph, NA_letter));
    return rcpp_result_gen;
END_RCPP
}
// CPP_has
Rcpp::LogicalVector CPP_has(const Rcpp::List& x, const std::vector<std::string>& motifs, const tidysq::Letter& NA_letter);
RcppExport SEXP _tidysq_CPP_has(SEXP xSEXP, SEXP motifsSEXP, SEXP NA_letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type motifs(motifsSEXP);
    Rcpp::traits::input_parameter< const tidysq::Letter& >::type NA_letter(NA_letterSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_has(x, motifs, NA_letter));
    return rcpp_result_gen;
END_RCPP
}
// CPP_obtain_alphabet
Rcpp::StringVector CPP_obtain_alphabet(const Rcpp::StringVector& x, const Rcpp::NumericVector& sample_size, const tidysq::Letter& NA_letter, const bool& ignore_case);
RcppExport SEXP _tidysq_CPP_obtain_alphabet(SEXP xSEXP, SEXP sample_sizeSEXP, SEXP NA_letterSEXP, SEXP ignore_caseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type sample_size(sample_sizeSEXP);
    Rcpp::traits::input_parameter< const tidysq::Letter& >::type NA_letter(NA_letterSEXP);
    Rcpp::traits::input_parameter< const bool& >::type ignore_case(ignore_caseSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_obtain_alphabet(x, sample_size, NA_letter, ignore_case));
    return rcpp_result_gen;
END_RCPP
}
// CPP_pack_RAWS
Rcpp::List CPP_pack_RAWS(const Rcpp::List& proto, const Rcpp::StringVector& alphabet, const tidysq::Letter& NA_letter, const bool& ignore_case);
RcppExport SEXP _tidysq_CPP_pack_RAWS(SEXP protoSEXP, SEXP alphabetSEXP, SEXP NA_letterSEXP, SEXP ignore_caseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type proto(protoSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type alphabet(alphabetSEXP);
    Rcpp::traits::input_parameter< const tidysq::Letter& >::type NA_letter(NA_letterSEXP);
    Rcpp::traits::input_parameter< const bool& >::type ignore_case(ignore_caseSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_pack_RAWS(proto, alphabet, NA_letter, ignore_case));
    return rcpp_result_gen;
END_RCPP
}
// CPP_pack_INTS
Rcpp::List CPP_pack_INTS(const Rcpp::List& proto, const Rcpp::StringVector& alphabet, const tidysq::Letter& NA_letter, const bool& ignore_case);
RcppExport SEXP _tidysq_CPP_pack_INTS(SEXP protoSEXP, SEXP alphabetSEXP, SEXP NA_letterSEXP, SEXP ignore_caseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type proto(protoSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type alphabet(alphabetSEXP);
    Rcpp::traits::input_parameter< const tidysq::Letter& >::type NA_letter(NA_letterSEXP);
    Rcpp::traits::input_parameter< const bool& >::type ignore_case(ignore_caseSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_pack_INTS(proto, alphabet, NA_letter, ignore_case));
    return rcpp_result_gen;
END_RCPP
}
// CPP_pack_STRINGS
Rcpp::List CPP_pack_STRINGS(const Rcpp::List& proto, const Rcpp::StringVector& alphabet, const tidysq::Letter& NA_letter, const bool& ignore_case);
RcppExport SEXP _tidysq_CPP_pack_STRINGS(SEXP protoSEXP, SEXP alphabetSEXP, SEXP NA_letterSEXP, SEXP ignore_caseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type proto(protoSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type alphabet(alphabetSEXP);
    Rcpp::traits::input_parameter< const tidysq::Letter& >::type NA_letter(NA_letterSEXP);
    Rcpp::traits::input_parameter< const bool& >::type ignore_case(ignore_caseSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_pack_STRINGS(proto, alphabet, NA_letter, ignore_case));
    return rcpp_result_gen;
END_RCPP
}
// CPP_pack_STRING
Rcpp::List CPP_pack_STRING(const Rcpp::StringVector& proto, const Rcpp::StringVector& alphabet, const tidysq::Letter& NA_letter, const bool& ignore_case);
RcppExport SEXP _tidysq_CPP_pack_STRING(SEXP protoSEXP, SEXP alphabetSEXP, SEXP NA_letterSEXP, SEXP ignore_caseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type proto(protoSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type alphabet(alphabetSEXP);
    Rcpp::traits::input_parameter< const tidysq::Letter& >::type NA_letter(NA_letterSEXP);
    Rcpp::traits::input_parameter< const bool& >::type ignore_case(ignore_caseSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_pack_STRING(proto, alphabet, NA_letter, ignore_case));
    return rcpp_result_gen;
END_RCPP
}
// CPP_paste
Rcpp::List CPP_paste(const Rcpp::List& list_of_x, const tidysq::Letter& NA_letter);
RcppExport SEXP _tidysq_CPP_paste(SEXP list_of_xSEXP, SEXP NA_letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type list_of_x(list_of_xSEXP);
    Rcpp::traits::input_parameter< const tidysq::Letter& >::type NA_letter(NA_letterSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_paste(list_of_x, NA_letter));
    return rcpp_result_gen;
END_RCPP
}
// CPP_random_sq
Rcpp::List CPP_random_sq(const int& n, const Rcpp::IntegerVector& len, const Rcpp::StringVector& alphabet, const bool& use_gap);
RcppExport SEXP _tidysq_CPP_random_sq(SEXP nSEXP, SEXP lenSEXP, SEXP alphabetSEXP, SEXP use_gapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int& >::type n(nSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type len(lenSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type alphabet(alphabetSEXP);
    Rcpp::traits::input_parameter< const bool& >::type use_gap(use_gapSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_random_sq(n, len, alphabet, use_gap));
    return rcpp_result_gen;
END_RCPP
}
// CPP_read_fasta
Rcpp::DataFrame CPP_read_fasta(const std::string& file_name, const Rcpp::StringVector& alphabet, const tidysq::Letter& NA_letter, const bool& ignore_case);
RcppExport SEXP _tidysq_CPP_read_fasta(SEXP file_nameSEXP, SEXP alphabetSEXP, SEXP NA_letterSEXP, SEXP ignore_caseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type file_name(file_nameSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type alphabet(alphabetSEXP);
    Rcpp::traits::input_parameter< const tidysq::Letter& >::type NA_letter(NA_letterSEXP);
    Rcpp::traits::input_parameter< const bool& >::type ignore_case(ignore_caseSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_read_fasta(file_name, alphabet, NA_letter, ignore_case));
    return rcpp_result_gen;
END_RCPP
}
// CPP_sample_fasta
Rcpp::StringVector CPP_sample_fasta(const std::string& file_name, const Rcpp::NumericVector& sample_size, const tidysq::Letter& NA_letter, const bool& ignore_case);
RcppExport SEXP _tidysq_CPP_sample_fasta(SEXP file_nameSEXP, SEXP sample_sizeSEXP, SEXP NA_letterSEXP, SEXP ignore_caseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type file_name(file_nameSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type sample_size(sample_sizeSEXP);
    Rcpp::traits::input_parameter< const tidysq::Letter& >::type NA_letter(NA_letterSEXP);
    Rcpp::traits::input_parameter< const bool& >::type ignore_case(ignore_caseSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_sample_fasta(file_name, sample_size, NA_letter, ignore_case));
    return rcpp_result_gen;
END_RCPP
}
// CPP_remove_NA
Rcpp::List CPP_remove_NA(const Rcpp::List& x, const bool& by_letter, const tidysq::Letter& NA_letter);
RcppExport SEXP _tidysq_CPP_remove_NA(SEXP xSEXP, SEXP by_letterSEXP, SEXP NA_letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const bool& >::type by_letter(by_letterSEXP);
    Rcpp::traits::input_parameter< const tidysq::Letter& >::type NA_letter(NA_letterSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_remove_NA(x, by_letter, NA_letter));
    return rcpp_result_gen;
END_RCPP
}
// CPP_remove_ambiguous
Rcpp::List CPP_remove_ambiguous(const Rcpp::List& x, const bool& by_letter, const tidysq::Letter& NA_letter);
RcppExport SEXP _tidysq_CPP_remove_ambiguous(SEXP xSEXP, SEXP by_letterSEXP, SEXP NA_letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const bool& >::type by_letter(by_letterSEXP);
    Rcpp::traits::input_parameter< const tidysq::Letter& >::type NA_letter(NA_letterSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_remove_ambiguous(x, by_letter, NA_letter));
    return rcpp_result_gen;
END_RCPP
}
// CPP_reverse
Rcpp::List CPP_reverse(const Rcpp::List& x, const tidysq::Letter& NA_letter);
RcppExport SEXP _tidysq_CPP_reverse(SEXP xSEXP, SEXP NA_letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const tidysq::Letter& >::type NA_letter(NA_letterSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_reverse(x, NA_letter));
    return rcpp_result_gen;
END_RCPP
}
// CPP_substitute_letters
Rcpp::List CPP_substitute_letters(const Rcpp::List& x, const Rcpp::StringVector& encoding, const tidysq::Letter& NA_letter);
RcppExport SEXP _tidysq_CPP_substitute_letters(SEXP xSEXP, SEXP encodingSEXP, SEXP NA_letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type encoding(encodingSEXP);
    Rcpp::traits::input_parameter< const tidysq::Letter& >::type NA_letter(NA_letterSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_substitute_letters(x, encoding, NA_letter));
    return rcpp_result_gen;
END_RCPP
}
// CPP_translate
Rcpp::List CPP_translate(const Rcpp::List& x, const int& table, const tidysq::Letter& NA_letter);
RcppExport SEXP _tidysq_CPP_translate(SEXP xSEXP, SEXP tableSEXP, SEXP NA_letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const int& >::type table(tableSEXP);
    Rcpp::traits::input_parameter< const tidysq::Letter& >::type NA_letter(NA_letterSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_translate(x, table, NA_letter));
    return rcpp_result_gen;
END_RCPP
}
// CPP_typify
Rcpp::List CPP_typify(const Rcpp::List& x, const std::string& dest_type, const tidysq::Letter& NA_letter);
RcppExport SEXP _tidysq_CPP_typify(SEXP xSEXP, SEXP dest_typeSEXP, SEXP NA_letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type dest_type(dest_typeSEXP);
    Rcpp::traits::input_parameter< const tidysq::Letter& >::type NA_letter(NA_letterSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_typify(x, dest_type, NA_letter));
    return rcpp_result_gen;
END_RCPP
}
// CPP_unpack_RAWS
Rcpp::List CPP_unpack_RAWS(const Rcpp::List& sq, const tidysq::Letter& NA_letter);
RcppExport SEXP _tidysq_CPP_unpack_RAWS(SEXP sqSEXP, SEXP NA_letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type sq(sqSEXP);
    Rcpp::traits::input_parameter< const tidysq::Letter& >::type NA_letter(NA_letterSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_unpack_RAWS(sq, NA_letter));
    return rcpp_result_gen;
END_RCPP
}
// CPP_unpack_INTS
Rcpp::List CPP_unpack_INTS(const Rcpp::List& sq, const tidysq::Letter& NA_letter);
RcppExport SEXP _tidysq_CPP_unpack_INTS(SEXP sqSEXP, SEXP NA_letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type sq(sqSEXP);
    Rcpp::traits::input_parameter< const tidysq::Letter& >::type NA_letter(NA_letterSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_unpack_INTS(sq, NA_letter));
    return rcpp_result_gen;
END_RCPP
}
// CPP_unpack_STRINGS
Rcpp::List CPP_unpack_STRINGS(const Rcpp::List& sq, const tidysq::Letter& NA_letter);
RcppExport SEXP _tidysq_CPP_unpack_STRINGS(SEXP sqSEXP, SEXP NA_letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type sq(sqSEXP);
    Rcpp::traits::input_parameter< const tidysq::Letter& >::type NA_letter(NA_letterSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_unpack_STRINGS(sq, NA_letter));
    return rcpp_result_gen;
END_RCPP
}
// CPP_unpack_STRING
Rcpp::StringVector CPP_unpack_STRING(const Rcpp::List& sq, const tidysq::Letter& NA_letter);
RcppExport SEXP _tidysq_CPP_unpack_STRING(SEXP sqSEXP, SEXP NA_letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type sq(sqSEXP);
    Rcpp::traits::input_parameter< const tidysq::Letter& >::type NA_letter(NA_letterSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_unpack_STRING(sq, NA_letter));
    return rcpp_result_gen;
END_RCPP
}
// CPP_write_fasta
void CPP_write_fasta(const Rcpp::List& x, const std::vector<std::string>& names, const std::string& file, const int& width, const tidysq::Letter& NA_value);
RcppExport SEXP _tidysq_CPP_write_fasta(SEXP xSEXP, SEXP namesSEXP, SEXP fileSEXP, SEXP widthSEXP, SEXP NA_valueSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type names(namesSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type file(fileSEXP);
    Rcpp::traits::input_parameter< const int& >::type width(widthSEXP);
    Rcpp::traits::input_parameter< const tidysq::Letter& >::type NA_value(NA_valueSEXP);
    CPP_write_fasta(x, names, file, width, NA_value);
    return R_NilValue;
END_RCPP
}

RcppExport SEXP run_testthat_tests();

static const R_CallMethodDef CallEntries[] = {
    {"_tidysq_CPP_apply_R_function", (DL_FUNC) &_tidysq_CPP_apply_R_function, 4},
    {"_tidysq_CPP_bite", (DL_FUNC) &_tidysq_CPP_bite, 4},
    {"_tidysq_CPP_collapse", (DL_FUNC) &_tidysq_CPP_collapse, 2},
    {"_tidysq_CPP_complement", (DL_FUNC) &_tidysq_CPP_complement, 2},
    {"_tidysq_CPP_find_invalid_letters", (DL_FUNC) &_tidysq_CPP_find_invalid_letters, 3},
    {"_tidysq_CPP_find_motifs", (DL_FUNC) &_tidysq_CPP_find_motifs, 4},
    {"_tidysq_CPP_get_standard_alphabet", (DL_FUNC) &_tidysq_CPP_get_standard_alphabet, 1},
    {"_tidysq_CPP_guess_standard_alph", (DL_FUNC) &_tidysq_CPP_guess_standard_alph, 2},
    {"_tidysq_CPP_has", (DL_FUNC) &_tidysq_CPP_has, 3},
    {"_tidysq_CPP_obtain_alphabet", (DL_FUNC) &_tidysq_CPP_obtain_alphabet, 4},
    {"_tidysq_CPP_pack_RAWS", (DL_FUNC) &_tidysq_CPP_pack_RAWS, 4},
    {"_tidysq_CPP_pack_INTS", (DL_FUNC) &_tidysq_CPP_pack_INTS, 4},
    {"_tidysq_CPP_pack_STRINGS", (DL_FUNC) &_tidysq_CPP_pack_STRINGS, 4},
    {"_tidysq_CPP_pack_STRING", (DL_FUNC) &_tidysq_CPP_pack_STRING, 4},
    {"_tidysq_CPP_paste", (DL_FUNC) &_tidysq_CPP_paste, 2},
    {"_tidysq_CPP_random_sq", (DL_FUNC) &_tidysq_CPP_random_sq, 4},
    {"_tidysq_CPP_read_fasta", (DL_FUNC) &_tidysq_CPP_read_fasta, 4},
    {"_tidysq_CPP_sample_fasta", (DL_FUNC) &_tidysq_CPP_sample_fasta, 4},
    {"_tidysq_CPP_remove_NA", (DL_FUNC) &_tidysq_CPP_remove_NA, 3},
    {"_tidysq_CPP_remove_ambiguous", (DL_FUNC) &_tidysq_CPP_remove_ambiguous, 3},
    {"_tidysq_CPP_reverse", (DL_FUNC) &_tidysq_CPP_reverse, 2},
    {"_tidysq_CPP_substitute_letters", (DL_FUNC) &_tidysq_CPP_substitute_letters, 3},
    {"_tidysq_CPP_translate", (DL_FUNC) &_tidysq_CPP_translate, 3},
    {"_tidysq_CPP_typify", (DL_FUNC) &_tidysq_CPP_typify, 3},
    {"_tidysq_CPP_unpack_RAWS", (DL_FUNC) &_tidysq_CPP_unpack_RAWS, 2},
    {"_tidysq_CPP_unpack_INTS", (DL_FUNC) &_tidysq_CPP_unpack_INTS, 2},
    {"_tidysq_CPP_unpack_STRINGS", (DL_FUNC) &_tidysq_CPP_unpack_STRINGS, 2},
    {"_tidysq_CPP_unpack_STRING", (DL_FUNC) &_tidysq_CPP_unpack_STRING, 2},
    {"_tidysq_CPP_write_fasta", (DL_FUNC) &_tidysq_CPP_write_fasta, 5},
    {"run_testthat_tests", (DL_FUNC) &run_testthat_tests, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_tidysq(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
