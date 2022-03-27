//
// Created by Abdelouahad Ait hamd on 3/24/22.
//

#include "ClapTrap.h"

ClapTrap::ClapTrap() {
    PRINT("ClapTrap ")
    PRINT(" default constructor called")
    PRINTLN()
    this->_hitPoint = 10;
    this->_energyPoint = 10;
    this->_attackDamagePoint = 0;
}

ClapTrap::ClapTrap(std::string name) {
    this->_name = name;
    this->_hitPoint = 10;
    this->_energyPoint = 10;
    this->_attackDamagePoint = 0;
    PRINT("ClapTrap ")
    PRINT(this->_name)
    PRINT(" custom  constructor called")
    PRINTLN()
}
ClapTrap::ClapTrap(const std::string &name, unsigned int hitPoint, unsigned int energyPoint,
                   unsigned int attackDamagePoint) :
                   _name(name), _hitPoint(hitPoint),
                   _energyPoint(energyPoint),
                  _attackDamagePoint(attackDamagePoint) {
    PRINT("ClapTrap ")
    PRINT(" constructor called")
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
    PRINT(" = operator  called")
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

const std::string &ClapTrap::getName() const {
    return _name;
}

void ClapTrap::setName(const std::string &name) {
    _name = name;
}

unsigned int ClapTrap::getHitPoint() const {
    return _hitPoint;
}

void ClapTrap::setHitPoint(unsigned int hitPoint) {
    _hitPoint = hitPoint;
}

unsigned int ClapTrap::getEnergyPoint() const {
    return _energyPoint;
}

void ClapTrap::setEnergyPoint(unsigned int energyPoint) {
    _energyPoint = energyPoint;
}

unsigned int ClapTrap::getAttackDamagePoint() const {
    return _attackDamagePoint;
}

void ClapTrap::setAttackDamagePoint(unsigned int attackDamagePoint) {
    _attackDamagePoint = attackDamagePoint;
}



