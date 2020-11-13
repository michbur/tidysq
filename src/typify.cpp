#include <Rcpp.h>

#include "tidysq/exports.h"
#include "tidysq/typify.h"

using namespace tidysq;

// [[Rcpp::export]]
Rcpp::List CPP_typify(const Rcpp::List& x,
                      const Rcpp::StringVector& dest_type,
                      const Rcpp::StringVector& NA_letter) {
    return export_to_R(typify<RCPP>(import_from_R(x, NA_letter),
            util::sq_type_for_sq_type_abbr(util::get_scalar_string_value(dest_type))));
}