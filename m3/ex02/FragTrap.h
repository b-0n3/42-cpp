//
// Created by Abdelouahad Ait hamd on 3/26/22.
//

#ifndef CPP_FRAGTRAP_H
#define CPP_FRAGTRAP_H
#include "ClapTrap.h"

class FragTrap : ClapTrap{
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &a);
    ~FragTrap();
    FragTrap &operator=(const FragTrap &a);
    void attack(const std::string &target);
    void highFivesGuys();
};


#endif //CPP_FRAGTRAP_H
