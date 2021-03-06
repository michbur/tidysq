% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/alphabet.R
\name{get_standard_alphabet}
\alias{get_standard_alphabet}
\title{Get standard alphabet for given type.}
\usage{
get_standard_alphabet(type)
}
\arguments{
\item{type}{[\code{character(1)}]\cr
The name of standard sq type - one of \code{"dna_bsc"}, \code{"dna_ext"},
\code{"rna_bsc"}, \code{"rna_ext"}, \code{"ami_bsc"} and \code{"ami_ext"}.}
}
\value{
An \code{sq_alphabet} object related to passed sq type.
}
\description{
Returns \code{alphabet} attribute of an object.
}
\details{
Each of standard sq types has exactly one predefined alphabet. It allows
\pkg{tidysq} to package to optimize type-specific operations like
\code{\link{complement}()} or \code{\link{translate}()}. This function
enables the user to access \code{alphabet} attribute common for all \code{sq}
objects of given type.

For list of letters specific to any of these standard alphabets, see
\code{\link{alphabet}()}.
}
\seealso{
Functions from alphabet module:
\code{\link{alphabet}()}
}
\concept{alphabet_functions}
