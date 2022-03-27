//
// Created by Abdelouahad Ait hamd on 3/26/22.
//

#include "DiamondTrap.h"

void DiamondTrap::attack(const std::string &target) {
    ScavTrap::attack(target);
}

DiamondTrap::DiamondTrap(const std::string &name)
        : FragTrap(name + "_FragTrap" ),
          ScavTrap(name +"_ScavTrap"),
          _name(name)
{
    ClapTrap::setEnergyPoint(50);
    ClapTrap::setHitPoint(100);
    ClapTrap::setAttackDamagePoint(30);
    PRINT("DiamondTrap custom constructor called")
    PRINTLN()
}

void DiamondTrap::whoAmI() {
    PRINT("DiamondTrap ")
    PRINT(this->_name)
    PRINT(" ")
    PRINT(ClapTrap::getName())
    PRINTLN()
}

DiamondTrap::DiamondTrap(const DiamondTrap &a)
: FragTrap(a), ScavTrap(a) {
    *this = a;
    PRINT("DiamondTrap copy constructor called")
    PRINTLN()
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &a) {
    ClapTrap::setAttackDamagePoint(a.getHitPoint());
    ClapTrap::setHitPoint(a.getHitPoint());
    ClapTrap::setEnergyPoint(a.getEnergyPoint());
    ClapTrap::setName(a.getName());
    this->_name = a._name;
    PRINT("DiamondTrap = operator called")
    PRINTLN()
    return *this;
}
DiamondTrap::~DiamondTrap() {
    PRINT("DiamondTrap  destructor called")
    PRINTLN()
}
DiamondTrap::DiamondTrap() {
    ClapTrap::setEnergyPoint(50);
    ClapTrap::setHitPoint(100);
    ClapTrap::setAttackDamagePoint(30);
    PRINT("DiamondTrap defalut constructor called")
    PRINTLN()
}
