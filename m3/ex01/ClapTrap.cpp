//
// Created by Abdelouahad Ait hamd on 3/24/22.
//

#include "ClapTrap.h"

ClapTrap::ClapTrap() {
    PRINT("ClapTrap ")
    PRINT(" default constructor called")
    PRINTLN()
    this->_hitPoint = 100;
    this->_energyPoint = 50;
    this->_attackDamagePoint = 20;
}

ClapTrap::ClapTrap(std::string name) {
    this->_name = name;
    this->_hitPoint = 100;
    this->_energyPoint = 50;
    this->_attackDamagePoint = 20;
    PRINT("ClapTrap ")
    PRINT(this->_name)
    PRINT(" custom  constructor called")
    PRINTLN()

}

ClapTrap::ClapTrap(const ClapTrap &a) {
    *this = a;
    PRINT("ClapTrap ")
    PRINT(this->_name)
    PRINT(" copy constructor called")
    PRINTLN()
}

ClapTrap::~ClapTrap() {
    PRINT("ClapTrap ")
    PRINT(this->_name)
    PRINT(" destructor called")
    PRINTLN()
}
ClapTrap &ClapTrap::operator=(const ClapTrap &a) {
    this->_name = a._name;
    this->_hitPoint = a._hitPoint;
    this->_energyPoint = a._energyPoint;
    this->_attackDamagePoint = a._attackDamagePoint;
    PRINT("ClapTrap ")
    PRINT(this->_name)
    PRINT(" assignment operator  called")
    PRINTLN()
    return *this;
}

void ClapTrap::attack(const std::string &target) {
    if (this->_energyPoint >= 0  && this->_hitPoint >=0) {
        this->_energyPoint -= 1;
        PRINT("ClapTrap ")
        PRINT(this->_name)
        PRINT(" attacks ")
        PRINT(target)
        PRINT(" , causing ")
        PRINT(this->_attackDamagePoint)
        PRINT(" points of damage!")
        PRINTLN()
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    this->_hitPoint -= amount;
    PRINT("ClapTrap: ")
    PRINT(this->_name)
    PRINT(" takeDamage  function called")
    PRINTLN()
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->_energyPoint >= 0  && this->_hitPoint >=0) {
        this->_hitPoint += amount;
        this->_energyPoint -= 1;
        PRINT("ClapTrap: ")
        PRINT(this->_name)
        PRINT(" beRepaired  function called")
        PRINTLN()
    }
}
