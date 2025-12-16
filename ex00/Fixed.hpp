#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {

    private :

        int fixed_point;
        static const int  fractionalbits = 8;

    public :

        Fixed();
        Fixed(const Fixed& copy);
        Fixed operator=(const Fixed& copy);
        ~Fixed();

        int GetRawBits(void)const;
        void SetRawBits(int const raw);
};

#endif
