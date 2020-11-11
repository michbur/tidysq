#pragma once

#include "tidysq/types/general.h"

#include "tidysq/types/TypeMapper.h"
#include "tidysq/types/ProtoSequence.h"
#include "tidysq/ops/internal/util.h"

namespace tidysq {
    namespace internal {
        //TODO: find out why the heck it doesn't find this function
        LenSq calculate_packed_internal_length(LenSq, const AlphSize&);
    }

    template<InternalType INTERNAL>
    Sequence<INTERNAL> bite(
            const typename Sequence<INTERNAL>::ConstSequenceIterator &it,
            const std::vector<int> &indices);

    template<InternalType INTERNAL>
    class Sequence {
        typename InternalTypeMapper<INTERNAL>::SequenceContentType content_;
        LenSq original_length_;
    public:
        typedef typename InternalTypeMapper<INTERNAL>::SequenceContentType ContentType;
        typedef typename InternalTypeMapper<INTERNAL>::SequenceElementType ElementType;
        typedef typename InternalTypeMapper<INTERNAL>::SequenceAccessType AccessType;
        typedef typename InternalTypeMapper<INTERNAL>::SequenceConstAccessType ConstAccessType;

    private:
        template<bool CONST>
        class GenericSequenceIterator : public std::iterator<std::bidirectional_iterator_tag, ElementPacked> {
        public:
            typedef typename std::conditional<CONST, const Sequence &, Sequence &>::type SequenceReference;
        protected:
            SequenceReference sequence_;
            const AlphSize alph_size_;
            LenSq pointer_;

        public:
            GenericSequenceIterator(SequenceReference sequence, const AlphSize &alph_size, const LenSq pointer);
            GenericSequenceIterator(SequenceReference sequence, const AlphSize &alph_size);
            GenericSequenceIterator(const GenericSequenceIterator<false> &other);

            GenericSequenceIterator& operator++();
            GenericSequenceIterator operator++(int);
            GenericSequenceIterator& operator--();
            GenericSequenceIterator operator--(int);

            // TODO: possibly implement swap()
            ElementPacked operator*() const;
            ElementPacked access(LenSq index);
            bool operator==(const GenericSequenceIterator& other) const;
            bool operator!=(const GenericSequenceIterator& other) const;
            bool operator>(const GenericSequenceIterator& other) const;
            bool operator<(const GenericSequenceIterator& other) const;
            bool operator>=(const GenericSequenceIterator& other) const;
            bool operator<=(const GenericSequenceIterator& other) const;
            GenericSequenceIterator operator+(LenSq i) const;
            GenericSequenceIterator operator+(const GenericSequenceIterator& it) const;
            GenericSequenceIterator& operator+=(LenSq i);
            GenericSequenceIterator operator-(LenSq i) const;
            GenericSequenceIterator operator-(const GenericSequenceIterator& it) const;
            GenericSequenceIterator& operator-=(LenSq i);
            ElementPacked operator[](LenSq i);
            [[nodiscard]] LenSq index() const;

            template<bool ENABLED = !CONST>
            void assign(std::enable_if_t<ENABLED, const ElementPacked &> value);

            template<bool ENABLED = !CONST>
            void assign(std::enable_if_t<!ENABLED, const ElementPacked &> value);

            friend Sequence<INTERNAL> bite<INTERNAL>(
                    const typename Sequence<INTERNAL>::template GenericSequenceIterator<true> &it,
                    const std::vector<int> &indices);
        };

    public:
        typedef GenericSequenceIterator<true> ConstSequenceIterator;
        typedef GenericSequenceIterator<false> SequenceIterator;

        Sequence(const ContentType &content, const LenSq originalLength) :
                content_(content),
                original_length_(originalLength) {};

        Sequence(const LenSq contentLength, const LenSq originalLength) :
                Sequence(ContentType(contentLength), originalLength) {};

        Sequence() :
                Sequence(0, 0) {};

        Sequence(const Sequence &other) = default;

        Sequence(Sequence &&other) noexcept = default;

        Sequence& operator=(const Sequence &other) = default;

        Sequence& operator=(Sequence &&other) noexcept = default;

        inline AccessType operator[](const LenSq index) {
            return content_[index];
        }

        inline ConstAccessType operator[](const LenSq index) const {
             return content_[index];
        }
        
        SequenceIterator begin(const AlphSize& alph_size) {
            return SequenceIterator(*this, alph_size);
        }
        
        SequenceIterator end(const AlphSize& alph_size) {
            return SequenceIterator(*this, alph_size, original_length_);
        }

        ConstSequenceIterator cbegin(const AlphSize& alph_size) const {
            return ConstSequenceIterator(*this, alph_size);
        }

        ConstSequenceIterator cend(const AlphSize& alph_size) const {
            return ConstSequenceIterator(*this, alph_size, original_length_);
        }

        [[nodiscard]] inline LenSq originalLength() const {
            return original_length_;
        }

        [[nodiscard]] inline LenSq length() const {
            return content_.size();
        }

        [[nodiscard]] inline ContentType content() const {
            return content_;
        }

        [[nodiscard]] inline bool operator==(const Sequence<INTERNAL> &other) const {
            return content_ == other.content_;
        }

        [[nodiscard]] inline bool operator!=(const Sequence<INTERNAL> &other) const {
            return !operator==(other);
        }

        void trim(const LenSq packed_length, const Alphabet &alphabet) {
            content_.erase(content_.begin() + internal::calculate_packed_internal_length(packed_length, alphabet.alphabet_size()), content_.end());
            original_length_ = packed_length;
        }
    };

    template<>
    inline bool Sequence<RCPP>::operator==(const Sequence<RCPP> &other) const {
        return Rcpp::is_true(Rcpp::all(content_ == other.content_));
    }

    //SEQUENCE<INTERNAL>::SEQUENCE_ITERATOR DEFINITION
    template<InternalType INTERNAL>
    template<bool CONST>
    inline Sequence<INTERNAL>::GenericSequenceIterator<CONST>::GenericSequenceIterator(
            SequenceReference sequence, const AlphSize &alph_size, const LenSq pointer) :
            sequence_(sequence),
            alph_size_(alph_size),
            pointer_(pointer) {}

    template<InternalType INTERNAL>
    template<bool CONST>
    inline Sequence<INTERNAL>::GenericSequenceIterator<CONST>::GenericSequenceIterator(
            SequenceReference sequence, const AlphSize &alph_size) :
            GenericSequenceIterator(sequence, alph_size, 0) {}


    template<InternalType INTERNAL>
    template<bool CONST>
    Sequence<INTERNAL>::GenericSequenceIterator<CONST>::GenericSequenceIterator(
            const Sequence::GenericSequenceIterator<false> &other) :
            sequence_(other.sequence_),
            alph_size_(other.alph_size_),
            pointer_(other.pointer_) {}

    template<InternalType INTERNAL>
    template<bool CONST>
    inline typename Sequence<INTERNAL>::template GenericSequenceIterator<CONST>
            &Sequence<INTERNAL>::GenericSequenceIterator<CONST>::operator++() {
        ++pointer_;
        return *this;
    }

    template<InternalType INTERNAL>
    template<bool CONST>
    inline typename Sequence<INTERNAL>::template GenericSequenceIterator<CONST>
            Sequence<INTERNAL>::GenericSequenceIterator<CONST>::operator++(int) {
        GenericSequenceIterator tmp(*this);
        operator++();
        return tmp;
    }
    template<InternalType INTERNAL>
    template<bool CONST>
    inline typename Sequence<INTERNAL>::template GenericSequenceIterator<CONST>
            &Sequence<INTERNAL>::GenericSequenceIterator<CONST>::operator--() {
        --pointer_;
        return *this;
    }

    template<InternalType INTERNAL>
    template<bool CONST>
    inline typename Sequence<INTERNAL>::template GenericSequenceIterator<CONST>
            Sequence<INTERNAL>::GenericSequenceIterator<CONST>::operator--(int) {
        GenericSequenceIterator tmp(*this);
        operator--();
        return tmp;
    }

    template<InternalType INTERNAL>
    template<bool CONST>
    inline ElementPacked Sequence<INTERNAL>::GenericSequenceIterator<CONST>::operator*() const {
        ElementPacked ret = 0xffu >> (8u - alph_size_);

        LenSq lowest_bit_index = alph_size_ * pointer_;
        LenSq highest_bit_index = lowest_bit_index + alph_size_ - 1;
        LenSq lowest_byte_index = lowest_bit_index / 8;
        LenSq highest_byte_index = highest_bit_index / 8;
        unsigned short lowest_bit_in_byte_index = lowest_bit_index % 8;

        ret = ret &
              ((sequence_.content_[lowest_byte_index] >> lowest_bit_in_byte_index) |
               (sequence_.content_[highest_byte_index] << (8 - lowest_bit_in_byte_index)));

        return ret;
    }

    template<InternalType INTERNAL>
    template<bool CONST>
    inline ElementPacked Sequence<INTERNAL>::GenericSequenceIterator<CONST>::access(LenSq index) {
        pointer_ = index;
        return operator*();
    }

    template<InternalType INTERNAL>
    template<bool CONST>
    template<bool ENABLED>
    void Sequence<INTERNAL>::GenericSequenceIterator<CONST>::assign(std::enable_if_t<ENABLED, const ElementPacked &> value) {
        LenSq lowest_bit_index = alph_size_ * pointer_;
        LenSq highest_bit_index = lowest_bit_index + alph_size_ - 1;
        LenSq lowest_byte_index = lowest_bit_index / 8;
        LenSq highest_byte_index = highest_bit_index / 8;
        unsigned short lowest_bit_in_byte_index = lowest_bit_index % 8;

        sequence_.content_[lowest_byte_index] = sequence_.content_[lowest_byte_index] |
                                                (value << lowest_bit_in_byte_index);
        if (highest_byte_index != lowest_byte_index) {
            sequence_.content_[highest_byte_index] = sequence_.content_[highest_byte_index] |
                                                     (value >> (8u - lowest_bit_in_byte_index));
        }
    }

    template<InternalType INTERNAL>
    template<bool CONST>
    template<bool ENABLED>
    void Sequence<INTERNAL>::GenericSequenceIterator<CONST>::assign(std::enable_if_t<!ENABLED, const ElementPacked &> value) {}

    template<InternalType INTERNAL>
    template<bool CONST>
    inline bool Sequence<INTERNAL>::GenericSequenceIterator<CONST>::operator==(const GenericSequenceIterator &other) const {
        return pointer_ == other.pointer_;
    }

    template<InternalType INTERNAL>
    template<bool CONST>
    inline bool Sequence<INTERNAL>::GenericSequenceIterator<CONST>::operator!=(const GenericSequenceIterator &other) const {
        return !operator==(other);
    }

    template<InternalType INTERNAL>
    template<bool CONST>
    inline bool Sequence<INTERNAL>::GenericSequenceIterator<CONST>::operator>(const GenericSequenceIterator &other) const {
        return pointer_ > other.pointer_;
    }

    template<InternalType INTERNAL>
    template<bool CONST>
    inline bool Sequence<INTERNAL>::GenericSequenceIterator<CONST>::operator<(const GenericSequenceIterator &other) const {
        return pointer_ < other.pointer_;
    }

    template<InternalType INTERNAL>
    template<bool CONST>
    inline bool Sequence<INTERNAL>::GenericSequenceIterator<CONST>::operator>=(const GenericSequenceIterator &other) const {
        return !operator<(other);
    }

    template<InternalType INTERNAL>
    template<bool CONST>
    inline bool Sequence<INTERNAL>::GenericSequenceIterator<CONST>::operator<=(const GenericSequenceIterator &other) const {
        return !operator>(other);
    }

    template<InternalType INTERNAL>
    template<bool CONST>
    inline typename Sequence<INTERNAL>::template GenericSequenceIterator<CONST> Sequence<INTERNAL>::GenericSequenceIterator<CONST>::operator+(LenSq i) const {
        GenericSequenceIterator tmp(*this);
        tmp += i;
        return tmp;
    }

    template<InternalType INTERNAL>
    template<bool CONST>
    inline typename Sequence<INTERNAL>::template GenericSequenceIterator<CONST> Sequence<INTERNAL>::GenericSequenceIterator<CONST>::operator+(const GenericSequenceIterator &it) const {
        return operator+(it.pointer_);
    }

    template<InternalType INTERNAL>
    template<bool CONST>
    inline typename Sequence<INTERNAL>::template GenericSequenceIterator<CONST> &Sequence<INTERNAL>::GenericSequenceIterator<CONST>::operator+=(LenSq i) {
        if (i + pointer_ > sequence_.originalLength_)
            throw std::out_of_range("SequenceIterator tried to increment the pointer after its end.");
        pointer_ += i;
        return *this;
    }

    template<InternalType INTERNAL>
    template<bool CONST>
    inline typename Sequence<INTERNAL>::template GenericSequenceIterator<CONST> Sequence<INTERNAL>::GenericSequenceIterator<CONST>::operator-(LenSq i) const {
        GenericSequenceIterator tmp(*this);
        tmp -= i;
        return tmp;
    }

    template<InternalType INTERNAL>
    template<bool CONST>
    inline typename Sequence<INTERNAL>::template GenericSequenceIterator<CONST> Sequence<INTERNAL>::GenericSequenceIterator<CONST>::operator-(const GenericSequenceIterator &it) const {
        operator-(it.pointer_);
    }

    template<InternalType INTERNAL>
    template<bool CONST>
    inline typename Sequence<INTERNAL>::template GenericSequenceIterator<CONST> &Sequence<INTERNAL>::GenericSequenceIterator<CONST>::operator-=(LenSq i) {
        if (i > pointer_) {
            throw std::out_of_range("SequenceIterator tried to decrement the pointer before its front.");
        }
        pointer_ -= i;
        return *this;
    }

    template<InternalType INTERNAL>
    template<bool CONST>
    inline ElementPacked Sequence<INTERNAL>::GenericSequenceIterator<CONST>::operator[](LenSq i) {
        pointer_ += i;
        return operator*();
    }

    template<InternalType INTERNAL>
    template<bool CONST>
    inline LenSq Sequence<INTERNAL>::GenericSequenceIterator<CONST>::index() const {
        return pointer_;
    }

}