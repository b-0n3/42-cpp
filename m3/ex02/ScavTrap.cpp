//
// Created by Abdelouahad Ait hamd on 3/26/22.
//

#include "ScavTrap.h"

ScavTrap::ScavTrap() : ClapTrap("", 100,50, 20) {
    PRINT("scavTrap ")
    PRINT(" default constructor called")
    PRINTLN()
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name, 100, 50, 20) {
    PRINT("scavTrap ")
    PRINT(" custom constructor called")
    PRINTLN()
}

ScavTrap::ScavTrap(const ScavTrap &a) : ClapTrap(a) {
    *this = a;
    PRINT("ScavTrap")
    PRINT(this->getName())
    PRINT(" copy constructor called")
    PRINTLN()
}

ScavTrap &ScavTrap::operator=(const ScavTrap &a) {
    this->setAttackDamagePoint(a.getAttackDamagePoint());
    this->setHitPoint(a.getHitPoint());
    this->setName(a.getName());
    this->setEnergyPoint(a.getEnergyPoint());
    PRINT("ScavTrap ")
    PRINT(this->getName())
    PRINT(" = operator  called")
    PRINTLN()
    return *this;
}

void ScavTrap::attack(const std::string &target) {
    if (this->getEnergyPoint() >= 0 && this->getEnergyPoint() >= 0) {
        this->setEnergyPoint(this->getEnergyPoint() - 1);
        PRINT("ScavTrap ")
        PRINT(this->getName())
        PRINT(" attacks ")
        PRINT(target)
        PRINT(" , causing ")
        PRINT(this->getAttackDamagePoint())
        PRINT(" points of damage!")
        PRINTLN()
    }
}
void ScavTrap::guardGate() {
    PRINT("ScavTrap ")
    PRINT(this->getName())
    PRINT(" is now in Gate keeper mode ")
    PRINTLN()
}

ScavTrap::~ScavTrap() {
    PRINT("ScavTrap ")
    PRINT(this->getName())
    PRINT(" destructor called")
    PRINTLN()
}
