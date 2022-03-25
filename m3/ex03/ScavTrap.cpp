//
// Created by Abdelouahad Ait hamd on 3/24/22.
//

#include "ScavTrap.h"

ScavTrap::~ScavTrap() {
    PRINT("ScavTrap ")
    PRINT(" destructor called")
    PRINTLN()
}

ScavTrap::ScavTrap() {
    PRINT("ScavTrap ")

    PRINT(" default constructor called")
    PRINTLN()
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    PRINT("ScavTrap ")
    PRINT(" custom  constructor called")
    PRINTLN()
}

ScavTrap::ScavTrap(const ScavTrap &a)   : ClapTrap(a) {
    *this = a;
    PRINT("ScavTrap ")
    PRINT(" copy constructor called")
    PRINTLN()
}

ScavTrap &ScavTrap::operator=(const ScavTrap &a) {
    ClapTrap::operator=(a);
    PRINT("ScavTrap ")
    PRINT(" assignment operator  called")
    PRINTLN()
    return  *this;
}

void ScavTrap::attack(const std::string &target) {
    PRINT("ScavTrap ")
    PRINT(" Attack Function Called ")
    PRINTLN()
    ClapTrap::attack(target);
}

void ScavTrap::guardGate() {
    PRINT(" ScavTrap is now in Gatekeeper mode.")
    PRINTLN()
}

