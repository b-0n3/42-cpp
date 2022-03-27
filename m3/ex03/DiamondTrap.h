//
// Created by Abdelouahad Ait hamd on 3/26/22.
//

#ifndef CPP_DIAMONDTRAP_H
#define CPP_DIAMONDTRAP_H
#include "FragTrap.h"
#include "ScavTrap.h"
class DiamondTrap :  FragTrap,  ScavTrap{
private:
    std::string _name;
public:
    DiamondTrap();
    DiamondTrap(const std::string &name);
    DiamondTrap(const DiamondTrap &a);
    ~DiamondTrap();
    DiamondTrap & operator=(const DiamondTrap &a);
    void attack(const std::string &target);
    void whoAmI();
};


#endif //CPP_DIAMONDTRAP_H
