//
// Created by Abdelouahad Ait hamd on 3/27/22.
//

#include "Animal.h"

Animal::~Animal() {
    std::cout << "Animal destructor" << std::endl;
}
const std::string &Animal::getType() const {
    return type;
}

void Animal::setType(const std::string &type) {
    Animal::type = type;
}


