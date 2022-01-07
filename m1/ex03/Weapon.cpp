//
// Created by Abdelouahad Ait hamd on 1/6/22.
//

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
    this->setType(type);
}

Weapon::~Weapon() {
    std::cout<<"weapon destructor called"<< std::endl;
}

const std::string &Weapon::getType() {
    return this->type;
}

void Weapon::setType(std::string type) {
    this->type = type;

}

Weapon::Weapon() {

}
