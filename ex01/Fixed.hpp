#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>


class Fixed {

    private:
        int                 fixed_point;
        static const int    fractional_bits = 8;

    public:
        Fixed();
        Fixed(const int int_value);
        Fixed(const float float_value);
        Fixed(const Fixed& copy);
        Fixed& operator=(const Fixed& copy);
        ~Fixed();

        int     toInt(void) const;
        float   toFloat(void) const;
        int     GetRawBits(void) const;
        void    SetRawBits(int const raw);
};

std::ostream& operator<<(std::ostream& out_stream, const Fixed& fixed);

#endif 