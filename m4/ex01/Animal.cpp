//
// Created by Abdelouahad Ait hamd on 3/27/22.
//

#include "Animal.h"

Animal::Animal() {
    this->setType("Animal");
}

Animal::~Animal() {

}

Animal::Animal(const Animal &a) {
   *this = a;
}
void Animal::makeSound() const{
    PRINT(this->getType())
    PRINT(" Animal sound")
    PRINTLN()
}
const std::string &Animal::getType() const {
    return type;
}

void Animal::setType(const std::string &type) {
    Animal::type = type;
}
Animal &Animal::operator=(const Animal &a) {
    this->setType(a.getType());
    return *this;
}

