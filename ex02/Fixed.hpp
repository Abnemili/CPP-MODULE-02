#ifndef FIXED_CPP
#define FIXED_CPP

#include <iostream>
#include <cmath>



class Fixed {

        private:
            int                 fixedPointValue;
            static const int    fractionalBits = 8;
        
        public:
            Fixed();
            Fixed(const int intValue);
            Fixed(const float floatValue);
            Fixed(const Fixed& copy);
            ~Fixed();

            Fixed& operator=(const Fixed &other);

            int     GetRawBits(void) const;
            void    SetRawBits(int const raw);
            float   ToFloat(void) const;
            int     ToInt(void) const;

            bool    operator>(const Fixed &other) const;
            bool    operator<(const Fixed &other) const;
            bool    operator>=(const Fixed &other) const;
            bool    operator<=(const Fixed &other) const;
            bool    operator==(const Fixed &other) const;
            bool    operator!=(const Fixed &other) const;

            Fixed   operator+(const Fixed &other) const;
            Fixed   operator-(const Fixed &other) const;
            Fixed   operator*(const Fixed &other) const;
            Fixed   operator/(const Fixed &other) const;

            Fixed&  operator++();
            Fixed   operator++(int);
            Fixed&  operator--();
            Fixed   operator--(int);
            
            static Fixed&    min(Fixed &a, Fixed &b);
            static const Fixed&    min(const Fixed &a, const Fixed &b);
            static Fixed&    max(Fixed &a, Fixed &b);
            static const Fixed&    max(const Fixed &a, const Fixed &b);

        };
        
std::ostream& operator<<(std::ostream &out, const Fixed &fixed);

#endif // FIXED_CPP