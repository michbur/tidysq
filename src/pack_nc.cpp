#include <Rcpp.h>

inline char C_translate_cdna(char letter) {
  char ret;
  switch (letter) {
  case 'a': case 'A': ret = 1; break;
  case 'c': case 'C': ret = 2; break;
  case 'g': case 'G': ret = 3; break;
  case 't': case 'T': ret = 4; break;
  case '-':           ret = 5; break;
  default:            ret = 7;
  }
  return ret;
}

inline char C_translate_crna(char letter) {
  char ret;
  switch (letter) {
  case 'a': case 'A': ret = 1; break;
  case 'c': case 'C': ret = 2; break;
  case 'g': case 'G': ret = 3; break;
  case 'u': case 'U': ret = 4; break;
  case '-':           ret = 5; break;
  default:            ret = 7;
  }
  return ret;
}

inline char C_translate_dna(char letter) {
  char ret;
  switch (letter) {
  case 'a': case 'A': ret = 1 ; break;
  case 'c': case 'C': ret = 2 ; break;
  case 'g': case 'G': ret = 3 ; break;
  case 't': case 'T': ret = 4 ; break;
  case 'w': case 'W': ret = 5 ; break;
  case 's': case 'S': ret = 6 ; break;
  case 'm': case 'M': ret = 7 ; break;
  case 'k': case 'K': ret = 8 ; break;
  case 'r': case 'R': ret = 9 ; break;
  case 'y': case 'Y': ret = 10; break;
  case 'b': case 'B': ret = 11; break;
  case 'd': case 'D': ret = 12; break;
  case 'h': case 'H': ret = 13; break;
  case 'v': case 'V': ret = 14; break;
  case 'n': case 'N': ret = 15; break;
  case '-':           ret = 16; break;
  default:            ret = 31;
  }
  return ret;
}

inline char C_translate_rna(char letter) {
  char ret;
  switch (letter) {
  case 'a': case 'A': ret = 1 ; break;
  case 'c': case 'C': ret = 2 ; break;
  case 'g': case 'G': ret = 3 ; break;
  case 'u': case 'U': ret = 4 ; break;
  case 'w': case 'W': ret = 5 ; break;
  case 's': case 'S': ret = 6 ; break;
  case 'm': case 'M': ret = 7 ; break;
  case 'k': case 'K': ret = 8 ; break;
  case 'r': case 'R': ret = 9 ; break;
  case 'y': case 'Y': ret = 10; break;
  case 'b': case 'B': ret = 11; break;
  case 'd': case 'D': ret = 12; break;
  case 'h': case 'H': ret = 13; break;
  case 'v': case 'V': ret = 14; break;
  case 'n': case 'N': ret = 15; break;
  case '-':           ret = 16; break;
  default:            ret = 31;
  }
  return ret;
}

inline char C_translate_cami(char letter) {
  char ret;
  switch (letter) {
  case 'a': case 'A': ret = 1 ; break;
  case 'c': case 'C': ret = 2 ; break;
  case 'd': case 'D': ret = 3 ; break;
  case 'e': case 'E': ret = 4 ; break;
  case 'f': case 'F': ret = 5 ; break;
  case 'g': case 'G': ret = 6 ; break;
  case 'h': case 'H': ret = 7 ; break;
  case 'i': case 'I': ret = 8 ; break;
  case 'k': case 'K': ret = 9 ; break;
  case 'l': case 'L': ret = 10; break;
  case 'm': case 'M': ret = 11; break;
  case 'n': case 'N': ret = 12; break;
  case 'p': case 'P': ret = 13; break;
  case 'q': case 'Q': ret = 14; break;
  case 'r': case 'R': ret = 15; break;
  case 's': case 'S': ret = 16; break;
  case 't': case 'T': ret = 17; break;
  case 'v': case 'V': ret = 18; break;
  case 'w': case 'W': ret = 19; break;
  case 'y': case 'Y': ret = 20; break;
  case '-':           ret = 21; break;
  case '*':           ret = 22; break;
  default:            ret = 31;
  }
  return ret;
}

inline char C_translate_ami(char letter) {
  char ret;
  switch (letter) {
  case 'a': case 'A': ret = 1 ; break;
  case 'b': case 'B': ret = 2 ; break;
  case 'c': case 'C': ret = 3 ; break;
  case 'd': case 'D': ret = 4 ; break;
  case 'e': case 'E': ret = 5 ; break;
  case 'f': case 'F': ret = 6 ; break;
  case 'g': case 'G': ret = 7 ; break;
  case 'h': case 'H': ret = 8 ; break;
  case 'i': case 'I': ret = 9 ; break;
  case 'j': case 'J': ret = 10; break;
  case 'k': case 'K': ret = 11; break;
  case 'l': case 'L': ret = 12; break;
  case 'm': case 'M': ret = 13; break;
  case 'n': case 'N': ret = 14; break;
  case 'o': case 'O': ret = 15; break;
  case 'p': case 'P': ret = 16; break;
  case 'q': case 'Q': ret = 17; break;
  case 'r': case 'R': ret = 18; break;
  case 's': case 'S': ret = 19; break;
  case 't': case 'T': ret = 20; break;
  case 'u': case 'U': ret = 21; break;
  case 'v': case 'V': ret = 22; break;
  case 'w': case 'W': ret = 23; break;
  case 'x': case 'X': ret = 24; break;
  case 'y': case 'Y': ret = 25; break;
  case 'z': case 'Z': ret = 26; break;
  case '-':           ret = 27; break;
  case '*':           ret = 28; break;
  default:            ret = 31;
  }
  return ret;
}

// [[Rcpp::export]]
Rcpp::RawVector nc_pack_cdna(Rcpp::RawVector UNPACKED) {
  const unsigned int ALPH_SIZE = 3;
  unsigned int in_len = UNPACKED.size();
  
  if (in_len == 0) return Rcpp::RawVector(0);
  
  Rcpp::RawVector ret((ALPH_SIZE * in_len  + 7) / 8);
  unsigned int out_byte = 0;
  
  int i = 0;
  for (; i + 8 <= in_len; i += 8) {
    ret[out_byte    ] = (C_translate_cdna(UNPACKED[i]    )     ) |
                        (C_translate_cdna(UNPACKED[i + 1]) << 3) |
                        (C_translate_cdna(UNPACKED[i + 2]) << 6);
    ret[out_byte + 1] = (C_translate_cdna(UNPACKED[i + 2]) >> 2) |
                        (C_translate_cdna(UNPACKED[i + 3]) << 1) |
                        (C_translate_cdna(UNPACKED[i + 4]) << 4) |
                        (C_translate_cdna(UNPACKED[i + 5]) << 7);
    ret[out_byte + 2] = (C_translate_cdna(UNPACKED[i + 5]) >> 1) |
                        (C_translate_cdna(UNPACKED[i + 6]) << 2) |
                        (C_translate_cdna(UNPACKED[i + 7]) << 5);
    out_byte += 3;
  }
  switch (in_len - i) {
  case 7:
    ret[out_byte    ] = (C_translate_cdna(UNPACKED[i]    )     ) |
                        (C_translate_cdna(UNPACKED[i + 1]) << 3) |
                        (C_translate_cdna(UNPACKED[i + 2]) << 6);
    ret[out_byte + 1] = (C_translate_cdna(UNPACKED[i + 2]) >> 2) |
                        (C_translate_cdna(UNPACKED[i + 3]) << 1) |
                        (C_translate_cdna(UNPACKED[i + 4]) << 4) |
                        (C_translate_cdna(UNPACKED[i + 5]) << 7);
    ret[out_byte + 2] = (C_translate_cdna(UNPACKED[i + 5]) >> 1) |
                        (C_translate_cdna(UNPACKED[i + 6]) << 2);
    break;
  case 6:
    ret[out_byte    ] = (C_translate_cdna(UNPACKED[i]    )     ) |
                        (C_translate_cdna(UNPACKED[i + 1]) << 3) |
                        (C_translate_cdna(UNPACKED[i + 2]) << 6);
    ret[out_byte + 1] = (C_translate_cdna(UNPACKED[i + 2]) >> 2) |
                        (C_translate_cdna(UNPACKED[i + 3]) << 1) |
                        (C_translate_cdna(UNPACKED[i + 4]) << 4) |
                        (C_translate_cdna(UNPACKED[i + 5]) << 7);
    ret[out_byte + 2] = (C_translate_cdna(UNPACKED[i + 5]) >> 1);
    break;
  case 5:
    ret[out_byte    ] = (C_translate_cdna(UNPACKED[i]    )     ) |
                        (C_translate_cdna(UNPACKED[i + 1]) << 3) |
                        (C_translate_cdna(UNPACKED[i + 2]) << 6);
    ret[out_byte + 1] = (C_translate_cdna(UNPACKED[i + 2]) >> 2) |
                        (C_translate_cdna(UNPACKED[i + 3]) << 1) |
                        (C_translate_cdna(UNPACKED[i + 4]) << 4);
    break;
  case 4:
    ret[out_byte    ] = (C_translate_cdna(UNPACKED[i]    )     ) |
                        (C_translate_cdna(UNPACKED[i + 1]) << 3) |
                        (C_translate_cdna(UNPACKED[i + 2]) << 6);
    ret[out_byte + 1] = (C_translate_cdna(UNPACKED[i + 2]) >> 2) |
                        (C_translate_cdna(UNPACKED[i + 3]) << 1);
    break;
  case 3:
    ret[out_byte    ] = (C_translate_cdna(UNPACKED[i]    )     ) |
                        (C_translate_cdna(UNPACKED[i + 1]) << 3) |
                        (C_translate_cdna(UNPACKED[i + 2]) << 6);
    ret[out_byte + 1] = (C_translate_cdna(UNPACKED[i + 2]) >> 2);
    break;
  case 2:
    ret[out_byte    ] = (C_translate_cdna(UNPACKED[i]    )     ) |
                        (C_translate_cdna(UNPACKED[i + 1]) << 3);
    break;
  case 1:
    ret[out_byte    ] = (C_translate_cdna(UNPACKED[i]    )     );
    break;
  }
  
  return ret;
}

// [[Rcpp::export]]
Rcpp::RawVector nc_pack_crna(Rcpp::RawVector UNPACKED) {
  const unsigned int ALPH_SIZE = 3;
  unsigned int in_len = UNPACKED.size();
  
  if (in_len == 0) return Rcpp::RawVector(0);
  
  Rcpp::RawVector ret((ALPH_SIZE * in_len  + 7) / 8);
  unsigned int out_byte = 0;
  
  int i = 0;
  for (; i + 8 <= in_len; i += 8) {
    ret[out_byte    ] = (C_translate_crna(UNPACKED[i]    )     ) |
                        (C_translate_crna(UNPACKED[i + 1]) << 3) |
                        (C_translate_crna(UNPACKED[i + 2]) << 6);
    ret[out_byte + 1] = (C_translate_crna(UNPACKED[i + 2]) >> 2) |
                        (C_translate_crna(UNPACKED[i + 3]) << 1) |
                        (C_translate_crna(UNPACKED[i + 4]) << 4) |
                        (C_translate_crna(UNPACKED[i + 5]) << 7);
    ret[out_byte + 2] = (C_translate_crna(UNPACKED[i + 5]) >> 1) |
                        (C_translate_crna(UNPACKED[i + 6]) << 2) |
                        (C_translate_crna(UNPACKED[i + 7]) << 5);
    out_byte += 3;
  }
  switch (in_len - i) {
  case 7:
    ret[out_byte    ] = (C_translate_crna(UNPACKED[i]    )     ) |
                        (C_translate_crna(UNPACKED[i + 1]) << 3) |
                        (C_translate_crna(UNPACKED[i + 2]) << 6);
    ret[out_byte + 1] = (C_translate_crna(UNPACKED[i + 2]) >> 2) |
                        (C_translate_crna(UNPACKED[i + 3]) << 1) |
                        (C_translate_crna(UNPACKED[i + 4]) << 4) |
                        (C_translate_crna(UNPACKED[i + 5]) << 7);
    ret[out_byte + 2] = (C_translate_crna(UNPACKED[i + 5]) >> 1) |
                        (C_translate_crna(UNPACKED[i + 6]) << 2);
    break;
  case 6:
    ret[out_byte    ] = (C_translate_crna(UNPACKED[i]    )     ) |
                        (C_translate_crna(UNPACKED[i + 1]) << 3) |
                        (C_translate_crna(UNPACKED[i + 2]) << 6);
    ret[out_byte + 1] = (C_translate_crna(UNPACKED[i + 2]) >> 2) |
                        (C_translate_crna(UNPACKED[i + 3]) << 1) |
                        (C_translate_crna(UNPACKED[i + 4]) << 4) |
                        (C_translate_crna(UNPACKED[i + 5]) << 7);
    ret[out_byte + 2] = (C_translate_crna(UNPACKED[i + 5]) >> 1);
    break;
  case 5:
    ret[out_byte    ] = (C_translate_crna(UNPACKED[i]    )     ) |
                        (C_translate_crna(UNPACKED[i + 1]) << 3) |
                        (C_translate_crna(UNPACKED[i + 2]) << 6);
    ret[out_byte + 1] = (C_translate_crna(UNPACKED[i + 2]) >> 2) |
                        (C_translate_crna(UNPACKED[i + 3]) << 1) |
                        (C_translate_crna(UNPACKED[i + 4]) << 4);
    break;
  case 4:
    ret[out_byte    ] = (C_translate_crna(UNPACKED[i]    )     ) |
                        (C_translate_crna(UNPACKED[i + 1]) << 3) |
                        (C_translate_crna(UNPACKED[i + 2]) << 6);
    ret[out_byte + 1] = (C_translate_crna(UNPACKED[i + 2]) >> 2) |
                        (C_translate_crna(UNPACKED[i + 3]) << 1);
    break;
  case 3:
    ret[out_byte    ] = (C_translate_crna(UNPACKED[i]    )     ) |
                        (C_translate_crna(UNPACKED[i + 1]) << 3) |
                        (C_translate_crna(UNPACKED[i + 2]) << 6);
    ret[out_byte + 1] = (C_translate_crna(UNPACKED[i + 2]) >> 2);
    break;
  case 2:
    ret[out_byte    ] = (C_translate_crna(UNPACKED[i]    )     ) |
                        (C_translate_crna(UNPACKED[i + 1]) << 3);
    break;
  case 1:
    ret[out_byte    ] = (C_translate_crna(UNPACKED[i]    )     );
    break;
  }
  
  return ret;
}

// [[Rcpp::export]]
Rcpp::RawVector nc_pack_dna(Rcpp::RawVector UNPACKED) {
  const unsigned int ALPH_SIZE = 5;
  unsigned int in_len = UNPACKED.size();
  
  if (in_len == 0) return Rcpp::RawVector(0);
  
  Rcpp::RawVector ret((ALPH_SIZE * in_len  + 7) / 8);
  unsigned int out_byte = 0;
  
  int i = 0;
  for (; i + 8 <= in_len; i += 8) {
    ret[out_byte    ] = (C_translate_dna(UNPACKED[i]    )     ) |
                        (C_translate_dna(UNPACKED[i + 1]) << 5);
    ret[out_byte + 1] = (C_translate_dna(UNPACKED[i + 1]) >> 3) |
                        (C_translate_dna(UNPACKED[i + 2]) << 2) |
                        (C_translate_dna(UNPACKED[i + 3]) << 7);
    ret[out_byte + 2] = (C_translate_dna(UNPACKED[i + 3]) >> 1) |
                        (C_translate_dna(UNPACKED[i + 4]) << 4);
    ret[out_byte + 3] = (C_translate_dna(UNPACKED[i + 4]) >> 4) |
                        (C_translate_dna(UNPACKED[i + 5]) << 1) |
                        (C_translate_dna(UNPACKED[i + 6]) << 6);
    ret[out_byte + 4] = (C_translate_dna(UNPACKED[i + 6]) >> 2) |
                        (C_translate_dna(UNPACKED[i + 7]) << 3);
    out_byte += 5;
  }
  switch (in_len - i) {
  case 7:
    ret[out_byte    ] = (C_translate_dna(UNPACKED[i]    )     ) |
                        (C_translate_dna(UNPACKED[i + 1]) << 5);
    ret[out_byte + 1] = (C_translate_dna(UNPACKED[i + 1]) >> 3) |
                        (C_translate_dna(UNPACKED[i + 2]) << 2) |
                        (C_translate_dna(UNPACKED[i + 3]) << 7);
    ret[out_byte + 2] = (C_translate_dna(UNPACKED[i + 3]) >> 1) |
                        (C_translate_dna(UNPACKED[i + 4]) << 4);
    ret[out_byte + 3] = (C_translate_dna(UNPACKED[i + 4]) >> 4) |
                        (C_translate_dna(UNPACKED[i + 5]) << 1) |
                        (C_translate_dna(UNPACKED[i + 6]) << 6);
    ret[out_byte + 4] = (C_translate_dna(UNPACKED[i + 6]) >> 2);
    break;
  case 6:
    ret[out_byte    ] = (C_translate_dna(UNPACKED[i]    )     ) |
                        (C_translate_dna(UNPACKED[i + 1]) << 5);
    ret[out_byte + 1] = (C_translate_dna(UNPACKED[i + 1]) >> 3) |
                        (C_translate_dna(UNPACKED[i + 2]) << 2) |
                        (C_translate_dna(UNPACKED[i + 3]) << 7);
    ret[out_byte + 2] = (C_translate_dna(UNPACKED[i + 3]) >> 1) |
                        (C_translate_dna(UNPACKED[i + 4]) << 4);
    ret[out_byte + 3] = (C_translate_dna(UNPACKED[i + 4]) >> 4) |
                        (C_translate_dna(UNPACKED[i + 5]) << 1);
    break;
  case 5:
    ret[out_byte    ] = (C_translate_dna(UNPACKED[i]    )     ) |
                        (C_translate_dna(UNPACKED[i + 1]) << 5);
    ret[out_byte + 1] = (C_translate_dna(UNPACKED[i + 1]) >> 3) |
                        (C_translate_dna(UNPACKED[i + 2]) << 2) |
                        (C_translate_dna(UNPACKED[i + 3]) << 7);
    ret[out_byte + 2] = (C_translate_dna(UNPACKED[i + 3]) >> 1) |
                        (C_translate_dna(UNPACKED[i + 4]) << 4);
    ret[out_byte + 3] = (C_translate_dna(UNPACKED[i + 4]) >> 4);
    break;
  case 4:
    ret[out_byte    ] = (C_translate_dna(UNPACKED[i]    )     ) |
                        (C_translate_dna(UNPACKED[i + 1]) << 5);
    ret[out_byte + 1] = (C_translate_dna(UNPACKED[i + 1]) >> 3) |
                        (C_translate_dna(UNPACKED[i + 2]) << 2) |
                        (C_translate_dna(UNPACKED[i + 3]) << 7);
    ret[out_byte + 2] = (C_translate_dna(UNPACKED[i + 3]) >> 1);
    break;
  case 3:
    ret[out_byte    ] = (C_translate_dna(UNPACKED[i]    )     ) |
                        (C_translate_dna(UNPACKED[i + 1]) << 5);
    ret[out_byte + 1] = (C_translate_dna(UNPACKED[i + 1]) >> 3) |
                        (C_translate_dna(UNPACKED[i + 2]) << 2);
    break;
  case 2:
    ret[out_byte    ] = (C_translate_dna(UNPACKED[i]    )     ) |
                        (C_translate_dna(UNPACKED[i + 1]) << 5);
    ret[out_byte + 1] = (C_translate_dna(UNPACKED[i + 1]) >> 3);
    break;
  case 1:
    ret[out_byte    ] = (C_translate_dna(UNPACKED[i]    )     );
    break;
  }
  
  return ret;
}

// [[Rcpp::export]]
Rcpp::RawVector nc_pack_rna(Rcpp::RawVector UNPACKED) {
  const unsigned int ALPH_SIZE = 5;
  unsigned int in_len = UNPACKED.size();
  
  if (in_len == 0) return Rcpp::RawVector(0);
  
  Rcpp::RawVector ret((ALPH_SIZE * in_len  + 7) / 8);
  unsigned int out_byte = 0;
  
  int i = 0;
  for (; i + 8 <= in_len; i += 8) {
    ret[out_byte    ] = (C_translate_rna(UNPACKED[i]    )     ) |
                        (C_translate_rna(UNPACKED[i + 1]) << 5);
    ret[out_byte + 1] = (C_translate_rna(UNPACKED[i + 1]) >> 3) |
                        (C_translate_rna(UNPACKED[i + 2]) << 2) |
                        (C_translate_rna(UNPACKED[i + 3]) << 7);
    ret[out_byte + 2] = (C_translate_rna(UNPACKED[i + 3]) >> 1) |
                        (C_translate_rna(UNPACKED[i + 4]) << 4);
    ret[out_byte + 3] = (C_translate_rna(UNPACKED[i + 4]) >> 4) |
                        (C_translate_rna(UNPACKED[i + 5]) << 1) |
                        (C_translate_rna(UNPACKED[i + 6]) << 6);
    ret[out_byte + 4] = (C_translate_rna(UNPACKED[i + 6]) >> 2) |
                        (C_translate_rna(UNPACKED[i + 7]) << 3);
    out_byte += 5;
  }
  switch (in_len - i) {
  case 7:
    ret[out_byte    ] = (C_translate_rna(UNPACKED[i]    )     ) |
                        (C_translate_rna(UNPACKED[i + 1]) << 5);
    ret[out_byte + 1] = (C_translate_rna(UNPACKED[i + 1]) >> 3) |
                        (C_translate_rna(UNPACKED[i + 2]) << 2) |
                        (C_translate_rna(UNPACKED[i + 3]) << 7);
    ret[out_byte + 2] = (C_translate_rna(UNPACKED[i + 3]) >> 1) |
                        (C_translate_rna(UNPACKED[i + 4]) << 4);
    ret[out_byte + 3] = (C_translate_rna(UNPACKED[i + 4]) >> 4) |
                        (C_translate_rna(UNPACKED[i + 5]) << 1) |
                        (C_translate_rna(UNPACKED[i + 6]) << 6);
    ret[out_byte + 4] = (C_translate_rna(UNPACKED[i + 6]) >> 2);
    break;
  case 6:
    ret[out_byte    ] = (C_translate_rna(UNPACKED[i]    )     ) |
                        (C_translate_rna(UNPACKED[i + 1]) << 5);
    ret[out_byte + 1] = (C_translate_rna(UNPACKED[i + 1]) >> 3) |
                        (C_translate_rna(UNPACKED[i + 2]) << 2) |
                        (C_translate_rna(UNPACKED[i + 3]) << 7);
    ret[out_byte + 2] = (C_translate_rna(UNPACKED[i + 3]) >> 1) |
                        (C_translate_rna(UNPACKED[i + 4]) << 4);
    ret[out_byte + 3] = (C_translate_rna(UNPACKED[i + 4]) >> 4) |
                        (C_translate_rna(UNPACKED[i + 5]) << 1);
    break;
  case 5:
    ret[out_byte    ] = (C_translate_rna(UNPACKED[i]    )     ) |
                        (C_translate_rna(UNPACKED[i + 1]) << 5);
    ret[out_byte + 1] = (C_translate_rna(UNPACKED[i + 1]) >> 3) |
                        (C_translate_rna(UNPACKED[i + 2]) << 2) |
                        (C_translate_rna(UNPACKED[i + 3]) << 7);
    ret[out_byte + 2] = (C_translate_rna(UNPACKED[i + 3]) >> 1) |
                        (C_translate_rna(UNPACKED[i + 4]) << 4);
    ret[out_byte + 3] = (C_translate_rna(UNPACKED[i + 4]) >> 4);
    break;
  case 4:
    ret[out_byte    ] = (C_translate_rna(UNPACKED[i]    )     ) |
                        (C_translate_rna(UNPACKED[i + 1]) << 5);
    ret[out_byte + 1] = (C_translate_rna(UNPACKED[i + 1]) >> 3) |
                        (C_translate_rna(UNPACKED[i + 2]) << 2) |
                        (C_translate_rna(UNPACKED[i + 3]) << 7);
    ret[out_byte + 2] = (C_translate_rna(UNPACKED[i + 3]) >> 1);
    break;
  case 3:
    ret[out_byte    ] = (C_translate_rna(UNPACKED[i]    )     ) |
                        (C_translate_rna(UNPACKED[i + 1]) << 5);
    ret[out_byte + 1] = (C_translate_rna(UNPACKED[i + 1]) >> 3) |
                        (C_translate_rna(UNPACKED[i + 2]) << 2);
    break;
  case 2:
    ret[out_byte    ] = (C_translate_rna(UNPACKED[i]    )     ) |
                        (C_translate_rna(UNPACKED[i + 1]) << 5);
    ret[out_byte + 1] = (C_translate_rna(UNPACKED[i + 1]) >> 3);
    break;
  case 1:
    ret[out_byte    ] = (C_translate_rna(UNPACKED[i]    )     );
    break;
  }
  
  return ret;
}

// [[Rcpp::export]]
Rcpp::RawVector nc_pack_cami(Rcpp::RawVector UNPACKED) {
  const unsigned int ALPH_SIZE = 5;
  unsigned int in_len = UNPACKED.size();
  
  if (in_len == 0) return Rcpp::RawVector(0);
  
  Rcpp::RawVector ret((ALPH_SIZE * in_len  + 7) / 8);
  unsigned int out_byte = 0;
  
  int i = 0;
  for (; i + 8 <= in_len; i += 8) {
    ret[out_byte    ] = (C_translate_cami(UNPACKED[i]    )     ) |
                        (C_translate_cami(UNPACKED[i + 1]) << 5);
    ret[out_byte + 1] = (C_translate_cami(UNPACKED[i + 1]) >> 3) |
                        (C_translate_cami(UNPACKED[i + 2]) << 2) |
                        (C_translate_cami(UNPACKED[i + 3]) << 7);
    ret[out_byte + 2] = (C_translate_cami(UNPACKED[i + 3]) >> 1) |
                        (C_translate_cami(UNPACKED[i + 4]) << 4);
    ret[out_byte + 3] = (C_translate_cami(UNPACKED[i + 4]) >> 4) |
                        (C_translate_cami(UNPACKED[i + 5]) << 1) |
                        (C_translate_cami(UNPACKED[i + 6]) << 6);
    ret[out_byte + 4] = (C_translate_cami(UNPACKED[i + 6]) >> 2) |
                        (C_translate_cami(UNPACKED[i + 7]) << 3);
    out_byte += 5;
  }
  switch (in_len - i) {
  case 7:
    ret[out_byte    ] = (C_translate_cami(UNPACKED[i]    )     ) |
                        (C_translate_cami(UNPACKED[i + 1]) << 5);
    ret[out_byte + 1] = (C_translate_cami(UNPACKED[i + 1]) >> 3) |
                        (C_translate_cami(UNPACKED[i + 2]) << 2) |
                        (C_translate_cami(UNPACKED[i + 3]) << 7);
    ret[out_byte + 2] = (C_translate_cami(UNPACKED[i + 3]) >> 1) |
                        (C_translate_cami(UNPACKED[i + 4]) << 4);
    ret[out_byte + 3] = (C_translate_cami(UNPACKED[i + 4]) >> 4) |
                        (C_translate_cami(UNPACKED[i + 5]) << 1) |
                        (C_translate_cami(UNPACKED[i + 6]) << 6);
    ret[out_byte + 4] = (C_translate_cami(UNPACKED[i + 6]) >> 2);
    break;
  case 6:
    ret[out_byte    ] = (C_translate_cami(UNPACKED[i]    )     ) |
                        (C_translate_cami(UNPACKED[i + 1]) << 5);
    ret[out_byte + 1] = (C_translate_cami(UNPACKED[i + 1]) >> 3) |
                        (C_translate_cami(UNPACKED[i + 2]) << 2) |
                        (C_translate_cami(UNPACKED[i + 3]) << 7);
    ret[out_byte + 2] = (C_translate_cami(UNPACKED[i + 3]) >> 1) |
                        (C_translate_cami(UNPACKED[i + 4]) << 4);
    ret[out_byte + 3] = (C_translate_cami(UNPACKED[i + 4]) >> 4) |
                        (C_translate_cami(UNPACKED[i + 5]) << 1);
    break;
  case 5:
    ret[out_byte    ] = (C_translate_cami(UNPACKED[i]    )     ) |
                        (C_translate_cami(UNPACKED[i + 1]) << 5);
    ret[out_byte + 1] = (C_translate_cami(UNPACKED[i + 1]) >> 3) |
                        (C_translate_cami(UNPACKED[i + 2]) << 2) |
                        (C_translate_cami(UNPACKED[i + 3]) << 7);
    ret[out_byte + 2] = (C_translate_cami(UNPACKED[i + 3]) >> 1) |
                        (C_translate_cami(UNPACKED[i + 4]) << 4);
    ret[out_byte + 3] = (C_translate_cami(UNPACKED[i + 4]) >> 4);
    break;
  case 4:
    ret[out_byte    ] = (C_translate_cami(UNPACKED[i]    )     ) |
                        (C_translate_cami(UNPACKED[i + 1]) << 5);
    ret[out_byte + 1] = (C_translate_cami(UNPACKED[i + 1]) >> 3) |
                        (C_translate_cami(UNPACKED[i + 2]) << 2) |
                        (C_translate_cami(UNPACKED[i + 3]) << 7);
    ret[out_byte + 2] = (C_translate_cami(UNPACKED[i + 3]) >> 1);
    break;
  case 3:
    ret[out_byte    ] = (C_translate_cami(UNPACKED[i]    )     ) |
                        (C_translate_cami(UNPACKED[i + 1]) << 5);
    ret[out_byte + 1] = (C_translate_cami(UNPACKED[i + 1]) >> 3) |
                        (C_translate_cami(UNPACKED[i + 2]) << 2);
    break;
  case 2:
    ret[out_byte    ] = (C_translate_cami(UNPACKED[i]    )     ) |
                        (C_translate_cami(UNPACKED[i + 1]) << 5);
    ret[out_byte + 1] = (C_translate_cami(UNPACKED[i + 1]) >> 3);
      break;
  case 1:
    ret[out_byte    ] = (C_translate_cami(UNPACKED[i]    )     );
    break;
  }
  
  return ret;
}

// [[Rcpp::export]]
Rcpp::RawVector nc_pack_ami(Rcpp::RawVector UNPACKED) {
  const unsigned int ALPH_SIZE = 5;
  unsigned int in_len = UNPACKED.size();
  
  if (in_len == 0) return Rcpp::RawVector(0);
  
  Rcpp::RawVector ret((ALPH_SIZE * in_len  + 7) / 8);
  unsigned int out_byte = 0;
  
  int i = 0;
  for (; i + 8 <= in_len; i += 8) {
    ret[out_byte    ] = (C_translate_ami(UNPACKED[i]    )     ) |
                        (C_translate_ami(UNPACKED[i + 1]) << 5);
    ret[out_byte + 1] = (C_translate_ami(UNPACKED[i + 1]) >> 3) |
                        (C_translate_ami(UNPACKED[i + 2]) << 2) |
                        (C_translate_ami(UNPACKED[i + 3]) << 7);
    ret[out_byte + 2] = (C_translate_ami(UNPACKED[i + 3]) >> 1) |
                        (C_translate_ami(UNPACKED[i + 4]) << 4);
    ret[out_byte + 3] = (C_translate_ami(UNPACKED[i + 4]) >> 4) |
                        (C_translate_ami(UNPACKED[i + 5]) << 1) |
                        (C_translate_ami(UNPACKED[i + 6]) << 6);
    ret[out_byte + 4] = (C_translate_ami(UNPACKED[i + 6]) >> 2) |
                        (C_translate_ami(UNPACKED[i + 7]) << 3);
    out_byte += 5;
  }
  switch (in_len - i) {
  case 7:
    ret[out_byte    ] = (C_translate_ami(UNPACKED[i]    )     ) |
                        (C_translate_ami(UNPACKED[i + 1]) << 5);
    ret[out_byte + 1] = (C_translate_ami(UNPACKED[i + 1]) >> 3) |
                        (C_translate_ami(UNPACKED[i + 2]) << 2) |
                        (C_translate_ami(UNPACKED[i + 3]) << 7);
    ret[out_byte + 2] = (C_translate_ami(UNPACKED[i + 3]) >> 1) |
                        (C_translate_ami(UNPACKED[i + 4]) << 4);
    ret[out_byte + 3] = (C_translate_ami(UNPACKED[i + 4]) >> 4) |
                        (C_translate_ami(UNPACKED[i + 5]) << 1) |
                        (C_translate_ami(UNPACKED[i + 6]) << 6);
    ret[out_byte + 4] = (C_translate_ami(UNPACKED[i + 6]) >> 2);
    break;
  case 6:
    ret[out_byte    ] = (C_translate_ami(UNPACKED[i]    )     ) |
                        (C_translate_ami(UNPACKED[i + 1]) << 5);
    ret[out_byte + 1] = (C_translate_ami(UNPACKED[i + 1]) >> 3) |
                        (C_translate_ami(UNPACKED[i + 2]) << 2) |
                        (C_translate_ami(UNPACKED[i + 3]) << 7);
    ret[out_byte + 2] = (C_translate_ami(UNPACKED[i + 3]) >> 1) |
                        (C_translate_ami(UNPACKED[i + 4]) << 4);
    ret[out_byte + 3] = (C_translate_ami(UNPACKED[i + 4]) >> 4) |
                        (C_translate_ami(UNPACKED[i + 5]) << 1);
    break;
  case 5:
    ret[out_byte    ] = (C_translate_ami(UNPACKED[i]    )     ) |
                        (C_translate_ami(UNPACKED[i + 1]) << 5);
    ret[out_byte + 1] = (C_translate_ami(UNPACKED[i + 1]) >> 3) |
                        (C_translate_ami(UNPACKED[i + 2]) << 2) |
                        (C_translate_ami(UNPACKED[i + 3]) << 7);
    ret[out_byte + 2] = (C_translate_ami(UNPACKED[i + 3]) >> 1) |
                        (C_translate_ami(UNPACKED[i + 4]) << 4);
    ret[out_byte + 3] = (C_translate_ami(UNPACKED[i + 4]) >> 4);
    break;
  case 4:
    ret[out_byte    ] = (C_translate_ami(UNPACKED[i]    )     ) |
                        (C_translate_ami(UNPACKED[i + 1]) << 5);
    ret[out_byte + 1] = (C_translate_ami(UNPACKED[i + 1]) >> 3) |
                        (C_translate_ami(UNPACKED[i + 2]) << 2) |
                        (C_translate_ami(UNPACKED[i + 3]) << 7);
    ret[out_byte + 2] = (C_translate_ami(UNPACKED[i + 3]) >> 1);
    break;
  case 3:
    ret[out_byte    ] = (C_translate_ami(UNPACKED[i]    )     ) |
                        (C_translate_ami(UNPACKED[i + 1]) << 5);
    ret[out_byte + 1] = (C_translate_ami(UNPACKED[i + 1]) >> 3) |
                        (C_translate_ami(UNPACKED[i + 2]) << 2);
    break;
  case 2:
    ret[out_byte    ] = (C_translate_ami(UNPACKED[i]    )     ) |
                        (C_translate_ami(UNPACKED[i + 1]) << 5);
    ret[out_byte + 1] = (C_translate_ami(UNPACKED[i + 1]) >> 3);
      break;
  case 1:
    ret[out_byte    ] = (C_translate_ami(UNPACKED[i]    )     );
    break;
  }
  
  return ret;
}
