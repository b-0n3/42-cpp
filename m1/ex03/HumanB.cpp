//
// Created by Abdelouahad Ait hamd on 1/6/22.
//

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
    this->name = name;
    this->weapon = NULL;
}

HumanB::~HumanB() {

}

void HumanB::attack() {
    if (this->weapon == NULL)
        return;
    std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
    this->weapon = &weapon;
}
