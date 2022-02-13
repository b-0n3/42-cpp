//
// Created by Abdelouahad Ait hamd on 2/10/22.
//

#include "Fixed.h"
#include "../ex01/Fixed.h"


Fixed::Fixed() {
    PRINT("Default constructor called")
    this->rawBits = 0;
}

Fixed::Fixed(Fixed const  &copy) {
    PRINT("Copy constructor called")
    *this = copy;
}

Fixed::~Fixed() {
    PRINT("Destructor called")
}

Fixed &Fixed::operator=(Fixed const &copy) {
    PRINT("Copy assignment operator called")
    if (this != &copy)
        this->rawBits = copy.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const {
    PRINT("getRawBits member function called")
    return this->rawBits;
}

void Fixed::setRawBits(const int raw) {
    PRINT("setRawBits member function called")
    this->rawBits = raw;
}


