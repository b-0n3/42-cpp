//
// Created by Abdelouahad Ait hamd on 3/26/22.
//

#ifndef CPP_SCAVTRAP_H
#define CPP_SCAVTRAP_H
#include "ClapTrap.h"

class ScavTrap  : ClapTrap{
public:
    ScavTrap();
    ScavTrap(const ScavTrap &a);
    ScavTrap(const std::string &name);

     ~ScavTrap();

    ScavTrap &operator=(const ScavTrap &a);
    void attack(const std::string &target);
    void guardGate();

};

#endif //CPP_SCAVTRAP_H
