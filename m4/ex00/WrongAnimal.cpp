//
// Created by Abdelouahad Ait hamd on 3/27/22.
//

#include "WrongAnimal.h"

WrongAnimal::WrongAnimal(const std::string &type)
: type(type) {}

WrongAnimal::WrongAnimal() {
    this->setType("WrongAnimal");
}

WrongAnimal::WrongAnimal(const WrongAnimal &a) {
    *this = a;
}

WrongAnimal::~WrongAnimal() {
    PRINT("wrong Animal destructor called");
    PRINTLN()
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &a) {
    this->setType(a.getType());
    return *this;
}

void WrongAnimal::makeSound() const {
    PRINT( "WrongAnimal sound")
    PRINTLN()
}

const std::string &WrongAnimal::getType() const {
    return type;
}

void WrongAnimal::setType(const std::string &type) {
    WrongAnimal::type = type;
}
