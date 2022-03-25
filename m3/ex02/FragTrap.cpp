//
// Created by Abdelouahad Ait hamd on 3/25/22.
//

#include "FragTrap.h"

FragTrap::FragTrap() {
    PRINT("FragTrap ")
    PRINT(" default constructor called")
    PRINTLN()
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
    PRINT("FragTrap ")
    PRINT(" custom  constructor called")
    PRINTLN()
}

FragTrap::FragTrap(const FragTrap &a) : ClapTrap(a){
    *this = a;
    PRINT("FragTrap ")
    PRINT(" copy constructor called")
    PRINTLN()
}

FragTrap::~FragTrap() {
    PRINT("FragTrap ")
    PRINT(" destructor called")
    PRINTLN()
}

void FragTrap::highFivesGuys(void) {
    PRINT("FragTrap ")
    PRINT(" high fives  request")
    PRINT(ClapTrap::_name)
    PRINTLN()
}

void FragTrap::attack(const std::string &target) {
    ClapTrap::attack(target);
}

FragTrap &FragTrap::operator=(const FragTrap &a) {
   ClapTrap::operator=(a);
    PRINT("FragTrap ")
    PRINT(" assignment operator  called")
    PRINTLN()
    return  *this;
}
