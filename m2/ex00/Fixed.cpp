//
// Created by Abdelouahad Ait hamd on 2/10/22.
//

#include "Fixed.h"
#include "../ex01/Fixed.h"


Fixed::Fixed() {
    PRINT("Default constructor called")
    this->rawBits = 0;
}

Fixed::Fixed(Fixed  &copy) {
    PRINT("Copy constructor called")
    *this = copy;
}

Fixed::~Fixed() {
    PRINT("Destructor called")
}

Fixed &Fixed::operator=(Fixed &copy) {
    PRINT("Copy assignment operator called")
   this->rawBits = copy.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) {
    PRINT("getRawBits member function called")
    return UNSCALE(this->rawBits);
}

void Fixed::setRawBits(const int raw) {
    PRINT("setRawBits member function called")
    this->rawBits = SCALE(raw);
}


