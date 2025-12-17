#include "Fixed.hpp"


Fixed::Fixed() : fixed_point(0) {
    std::cout << "Default constructor called" << std::endl;
}


Fixed:: Fixed(const int int_value) {
    std::cout << "Int constructor called" << std::endl;
    fixed_point = int_value << fractional_bits;
}


Fixed:: Fixed(const float float_value) {
    std::cout << "Float constructor called" << std::endl;
    fixed_point = roundf(float_value * (1 << fractional_bits));
}


Fixed::Fixed(const Fixed& copy) {
    std::cout << "Copy constructor called" << std::endl;
    fixed_point = copy.GetRawBits();
}


Fixed& Fixed::operator=(const Fixed& copy) {
    std::cout << "Assignation operator called" << std::endl;
    if (this != &copy) {
        fixed_point = copy.GetRawBits();
    }
    return *this;
}


Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}


int Fixed::GetRawBits() const {
    return fixed_point;
}


void Fixed::SetRawBits(int const raw) {
    fixed_point = raw;
}


float Fixed::toFloat() const {
    return static_cast<float>(fixed_point) / (1 << fractional_bits);
}

int Fixed::toInt() const {
    return fixed_point >> fractional_bits;
}

std::ostream& operator<<(std::ostream& out_strteam, const Fixed& fixed) {
    out_strteam << fixed.toFloat();
    return out_strteam;
}
