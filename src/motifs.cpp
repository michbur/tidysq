// // [[Rcpp::depends(stringi)]]
// 
// #include <Rcpp.h>
// #include <stringi.h>
// 
// Rcpp::CharacterVector C_unpack_chars(Rcpp::RawVector packed,
//                                      Rcpp::CharacterVector alph,
//                                      Rcpp::CharacterVector na_letter);
// 
// //[[Rcpp::export]]
// Rcpp::List C_find_motifs(Rcpp::RawVector sq,
//                          Rcpp::CharacterVector alph,
//                          Rcpp::CharacterVector na_letter,
//                          Rcpp::CharacterVector motif) {
//   Rcpp::CharacterVector unpacked = C_unpack_chars(sq, alph, na_letter);
//   stri_locate_all_regex(Rcpp::collapse(unpacked), motif, "", "");
//   return Rcpp::List(unpacked);
// }