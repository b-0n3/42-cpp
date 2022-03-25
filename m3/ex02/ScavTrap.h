//
// Created by Abdelouahad Ait hamd on 3/24/22.
//

#ifndef CPP_SCAVTRAP_H
#define CPP_SCAVTRAP_H


#include "ClapTrap.h"

class ScavTrap : ClapTrap{
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &a);
    ScavTrap & operator=(const ScavTrap &a);
    ~ScavTrap();
    void attack(const std::string &target);
    void guardGate();
};


#endif //CPP_SCAVTRAP_H
