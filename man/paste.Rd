% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/paste.R
\name{paste}
\alias{paste}
\alias{paste.sq}
\title{Paste sequences in string-like fashion}
\usage{
\method{paste}{sq}(..., NA_letter = getOption("tidysq_NA_letter"))
}
\arguments{
\item{...}{[\code{sq}]\cr
Sequences to paste together.}

\item{NA_letter}{[\code{character(1)}]\cr
A string that is used to interpret and display \code{NA} value in the
context of \code{\link[=sq-class]{sq class}}. Default value equals to
"\code{!}".}
}
\value{
\code{\link[=sq-class]{sq}} object of common type of input objects.
Common type is determined in the same process as for
\code{\link[=sq-concatenate]{c.sq}()}.
}
\description{
Joins multiple vectors of sequences into one vector.
}
\details{
\code{paste()} joins sequences in the same way as it does with strings.
All \code{sq} objects must have the same length, that is, contain the same
number of sequences. An exception is made for scalar (length 1) \code{sq}
objects, which are replicated instead.
}
\examples{
# Creating objects to work on:
sq_dna_1 <- sq(c("TTCAGGGCTAG", "CGATTGC", "CAGTTTA"),
               alphabet = "dna_bsc")
sq_dna_2 <- sq(c("ATCTTGAAG", "CATATGCGCTA", "ACGTGTCGA"),
               alphabet = "dna_bsc")
sq_unt_1 <- sq(c("ATGCAGGA?", "TGACGAGCTTA", "", "TIAALGNIIYRAIE"))
sq_unt_2 <- sq(c("OVNU!!OK!!J", "GOK!MI!N!BB!", "DPOFIN!!", "??!?"))

# Pasting sequences:
collapse(sq_dna_1, sq_dna_2)
collapse(sq_unt_1, sq_unt_2)
collapse(sq_dna_2, sq_unt_2, sq_dna_1)

}
\seealso{
Functions that affect order of elements:
\code{\link{bite}()},
\code{\link{collapse}()},
\code{\link{reverse}()}
}
\concept{order_functions}
