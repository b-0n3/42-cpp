//
// Created by Abdelouahad Ait hamd on 1/5/22.
//

#include "Zombie.hpp"

Zombie::~Zombie() {
    std::cout << this->name << " is dead , destructor has been called " << std::endl;
}

void Zombie::announce(void) {
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name) {
    this->name = name;
}

void Zombie::setName(std::string name) {
    this->name = name ;
}
