#pragma once

#include "tidysq/exports.h"

namespace tidysq {
    template<InternalType INTERNAL>
    Sq<INTERNAL> typify(const Sq<INTERNAL> &sq,
                        const SqType &type) {
        // Early return whenever current type is equal to target type
        if (sq.type() == type) {
            return sq;
        }

        const Alphabet &alph = sq.alphabet();
        const Alphabet dest_alph = Alphabet(type, alph.NA_letter());

        // Input alphabet must be a subset of target alphabet, otherwise some letters cannot be encoded
        if (!std::all_of(alph.letters().cbegin(), alph.letters().cend(), [=](const Letter &letter) {
            return dest_alph.contains(letter);
        })) {
            throw std::invalid_argument("sq object contains letters that do not appear in the alphabet of target type");
        }

        ProtoSq<INTERNAL, STRINGS> unpacked = sq.template unpack<INTERNAL, STRINGS>();
        unpacked.alphabet() = dest_alph;
        return unpacked.template pack<INTERNAL>();
    }
}