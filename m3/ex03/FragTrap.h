//
// Created by Abdelouahad Ait hamd on 3/25/22.
//

#ifndef CPP_FRAGTRAP_H
#define CPP_FRAGTRAP_H
#include "ClapTrap.h"

class FragTrap : ClapTrap{
public:
    FragTrap();
    ~FragTrap();
    FragTrap(const FragTrap &a);
    FragTrap(const std::string &name);
    void highFivesGuys(void);
    FragTrap& operator=(const FragTrap &a);
    void attack(const std::string & target);
};


#endif //CPP_FRAGTRAP_H
