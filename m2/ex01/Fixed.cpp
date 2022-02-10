//
// Created by Abdelouahad Ait hamd on 2/10/22.
//

#include "Fixed.h"
Fixed::Fixed() {
    PRINT("Default constructor called")
    this->rawBits = 0;
}

Fixed::Fixed(const Fixed  &copy) {
    PRINT("Copy constructor called");
    *this = copy;
}

Fixed::~Fixed() {
    PRINT("Destructor called")
}

Fixed &Fixed::operator=(Fixed const &copy) {
    PRINT("Copy assignment operator called")
    this->rawBits = copy.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const {
    PRINT("getRawBits member function called")
    return UNSCALE(this->rawBits);
}

void Fixed::setRawBits(const int raw) {
    PRINT("setRawBits member function called")
    this->rawBits = SCALE(raw);
}

Fixed::Fixed(const int value) {
    PRINT("Int constructor called");
    this->rawBits = SCALE(value);
}

Fixed::Fixed(const float value) {
    PRINT("Float constructor called");
    this->rawBits = std::roundf(value * (1<<Fixed::fractionalBits));
}

float Fixed::toFloat() const {
    PRINT("toFloat member function called");
    return roundf(UNSCALE(this->rawBits));
}

 int Fixed::toInt() const {
    PRINT("toInt member function called");
    return UNSCALE(this->rawBits);
}
std::ostream &operator<<(std::ostream &os, Fixed const& f)
{

    os << std::roundf(f.getRawBits() / (1 <<8));
    return os;
}
