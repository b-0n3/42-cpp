//
// Created by Abdelouahad Ait hamd on 3/26/22.
//

#include "FragTrap.h"
/**
 * @Todo: add output debug message
 */
FragTrap::FragTrap() : ClapTrap("", 100, 100, 30) {
    PRINT("FragTrap ")
    PRINT(" default constructor called")
    PRINTLN()
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30) {
    PRINT("FragTrap ")
    PRINT(" custom constructor called")
    PRINTLN()
}

FragTrap::FragTrap(const FragTrap &a) : ClapTrap(a) {
    *this = a;
    PRINT("FragTrap ")
    PRINT(this->getName())
    PRINT(" copy constructor called")
    PRINTLN()
}

FragTrap::~FragTrap() {
    PRINT("FragTrap ")
    PRINT(this->getName())
    PRINT(" destructor called")
    PRINTLN()
}

FragTrap &FragTrap::operator=(const FragTrap &a) {
    this->setAttackDamagePoint(a.getAttackDamagePoint());
    this->setHitPoint(a.getHitPoint());
    this->setName(a.getName());
    this->setEnergyPoint(a.getEnergyPoint());
    PRINT("FragTrap ")
    PRINT(this->getName())
    PRINT(" = operator  called")
    PRINTLN()
    return *this;
}

void FragTrap::attack(const std::string &target) {
    ClapTrap::attack(target);
}

void FragTrap::highFivesGuys() {
    PRINT("FragTrap ")
    PRINT(this->getName())
    PRINT(" request A positive high five")
    PRINTLN()
}
