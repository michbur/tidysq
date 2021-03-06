% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/translate.R
\name{translate}
\alias{translate}
\alias{translate.sq_dna_bsc}
\alias{translate.sq_rna_bsc}
\title{Convert DNA or RNA into proteins using genetic code}
\usage{
translate(x, table = 1, ...)

\method{translate}{sq_dna_bsc}(x, table = 1, ..., NA_letter = getOption("tidysq_NA_letter"))

\method{translate}{sq_rna_bsc}(x, table = 1, ..., NA_letter = getOption("tidysq_NA_letter"))
}
\arguments{
\item{x}{[\code{sq_dna_bsc} || \code{sq_rna_bsc}]\cr
An object this function is applied to.}

\item{table}{[\code{integer(1)}]\cr
 The number of translation table used, as specified
\href{https://www.ncbi.nlm.nih.gov/Taxonomy/Utils/wprintgc.cgi}{here}.}

\item{...}{further arguments to be passed from or to other methods.}

\item{NA_letter}{[\code{character(1)}]\cr
A string that is used to interpret and display \code{NA} value in the
context of \code{\link[=sq-class]{sq class}}. Default value equals to
"\code{!}".}
}
\value{
An object of \code{\link[=sq-class]{class sq}} with \strong{ami_bsc}
type.
}
\description{
This function allows the user to input DNA or RNA sequences and
acquire sequences of corresponding proteins, where correspondence is encoded
in specified table.
}
\details{
DNA and RNA sequences use combinations of three consecutive nucleic acids to
encode one of 22 amino acids. This encoding is called "genetic code".

\code{translate()} first splits passed DNA or RNA sequences into
three-letter chunks. Then searches the codon table for the entry where the
key is equal to the current chunk and the value is one letter that encodes
the corresponding protein. These resulting letters are then pasted into one
sequence for each input sequence.

Due to how the tables works, \code{translate()} does not support inputting
sequences with extended alphabets, as ambiguous letters in most cases cannot
be translated into exactly one protein.

Moreover, this function raises an error whenever input sequence contain
either "\code{-}" or \code{NA} value.
}
\examples{
sq_dna <- sq(c("TACTGGGCATGA", "CAGGTC", "TAGTCCTAG"), alphabet = "dna_bsc")
translate(sq_dna)

}
\seealso{
\code{\link{remove_ambiguous}}, \code{\link{substitute_letters}} and
\code{\link{typify}} for necessary actions before using \code{translate()}

Functions interpreting sq in biological context:
\code{\link{\%has\%}()},
\code{\link{complement}()},
\code{\link{find_motifs}()}
}
\concept{bio_functions}
