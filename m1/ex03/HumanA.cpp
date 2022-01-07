//
// Created by Abdelouahad Ait hamd on 1/6/22.
//

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) {
    this->name = name;
    this->weapon = weapon;
}

HumanA::~HumanA() {

}

void HumanA::attack() {
    std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}
