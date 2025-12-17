#include "Fixed.hpp"


Fixed::Fixed() : fixedPointValue(0) {
    std::cout << "Default constructor called " << std::endl;
}

Fixed::Fixed(const int intValue) {
    std::cout << "int constructor called" << std::endl;
    fixedPointValue = intValue << fractionalBits;
}

Fixed::Fixed(const float floatValue) {
    std::cout << "float constructor called " << std::endl;
    fixedPointValue = roundf (floatValue * (1 << fractionalBits));
}


Fixed::Fixed (const Fixed& copy) {
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}



Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}


float Fixed::ToFloat() const {
    return static_cast<float>(fixedPointValue) / (1 << fractionalBits);
}

int Fixed::ToInt() const {
    return fixedPointValue >> fractionalBits;
}


int Fixed::GetRawBits(void) const {
    std::cout << "GetRawbits member function called " << std::endl;
    return fixedPointValue;
}


void  Fixed::SetRawBits(const int raw) {
    std::cout << "SetRawBits member function called" << std::endl;
    this->fixedPointValue = raw;
}

Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "assignment operator called" << std::endl;
    if (this != &other)
        fixedPointValue = other.fixedPointValue;
    return  (*this);
}

bool Fixed::operator>(const Fixed& other) const {
    return fixedPointValue > other.fixedPointValue;
}

bool Fixed::operator<(const Fixed& other) const {
    return fixedPointValue < other.fixedPointValue;
}


bool Fixed::operator>=(const Fixed& other) const {
    return fixedPointValue >= other.fixedPointValue;
}


bool Fixed::operator<=(const Fixed& other) const {
    return fixedPointValue <= other.fixedPointValue;
}


bool Fixed::operator==(const Fixed& other) const {
    return fixedPointValue == other.fixedPointValue;
}


bool Fixed::operator!=(const Fixed& other) const {
    return fixedPointValue != other.fixedPointValue;
}


Fixed Fixed::operator*(const Fixed &other) const {
    return Fixed(this->ToFloat() * other.ToFloat());
}

Fixed Fixed::operator+(const Fixed &other) const {
    return Fixed(this->ToFloat() + other.ToFloat());
}


Fixed Fixed::operator/(const Fixed &other) const {
    return Fixed(this->ToFloat() / other.ToFloat());
}


Fixed& Fixed::operator++() {
    fixedPointValue++;
    return (*this);
}

Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    fixedPointValue++;
    return (tmp);
}

Fixed& Fixed::operator--() {
    fixedPointValue--;
    return (*this);
}

Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    fixedPointValue--;
    return (tmp);
}


Fixed& Fixed::min(Fixed& a, Fixed& b) {
    if (a < b )
        return a;
    else
        return b;
}


const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    if (a < b )
        return a;
    else
        return b;
}

Fixed& Fixed::max(Fixed& a,Fixed& b) {
    if (a > b )
        return a;
    else
        return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    if (a > b )
        return a;
    else
        return b;
}

std::ostream& operator<<(std::ostream& out, const Fixed& value) {
    out << value.ToFloat();
    return out;
}