#include "Fixed.hpp"


Fixed::Fixed() : fixed_point(0) {
    std::cout << "Default constructor called" << std::endl;
}


// int constructor
Fixed:: Fixed(const int int_value) {
    std::cout << "Int constructor called" << std::endl;
    fixed_point = int_value << fractional_bits;
}


// float constructor
Fixed:: Fixed(const float float_value) {
    std::cout << "Float constructor called" << std::endl;
    fixed_point = roundf(float_value * (1 << fractional_bits));
}



// copy constructor
Fixed::Fixed(const Fixed& copy) {
    std::cout << "Copy constructor called" << std::endl;
    fixed_point = copy.GetRawBits();
}

// assignment operator
Fixed& Fixed::operator=(const Fixed& copy) {
    std::cout << "Assignation operator called" << std::endl;
    if (this != &copy) {
        fixed_point = copy.GetRawBits();
    }
    return *this;
}

// destructor
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}



// get raw bits
int Fixed::GetRawBits() const {
    return fixed_point;
}



// set raw bits
void Fixed::SetRawBits(int const raw) {
    fixed_point = raw;
}



// convert to float
float Fixed::toFloat() const {
    return static_cast<float>(fixed_point) / (1 << fractional_bits);
}



// convert to int
int Fixed::toInt() const {
    return fixed_point >> fractional_bits;
}


// overload of the insertion operator
std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}
