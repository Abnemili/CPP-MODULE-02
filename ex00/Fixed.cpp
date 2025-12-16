#include "Fixed.hpp"

Fixed::Fixed() :fixed_point(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy){
    std::cout << "Copy constructor called" << std::endl;
    this->fixed_point = copy.GetRawBits();
}


Fixed Fixed::operator=(const Fixed& copy){
    std::cout << "Assignation operator called" << std::endl;
    if (this != &copy)
    this->fixed_point = copy.GetRawBits();
    return (*this);
}

int Fixed::GetRawBits(void)const{
    std::cout << "GetRawBits member function called" << std::endl;
    return (this->fixed_point);
}


void Fixed::SetRawBits(int const raw){
    this->fixed_point = raw;
}   