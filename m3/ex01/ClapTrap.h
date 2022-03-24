//
// Created by Abdelouahad Ait hamd on 3/24/22.
//

#ifndef CPP_CLAPTRAP_H
#define CPP_CLAPTRAP_H
#include <iostream>
#define  PRINT(x)  std::cout << x;
#define  PRINTLN()  std::cout << std::endl;

class ClapTrap {
private:
    std::string _name;
    unsigned int         _hitPoint;
    unsigned int         _energyPoint;
    unsigned int         _attackDamagePoint;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &a);
    ~ClapTrap();
    ClapTrap & operator=(const ClapTrap &a);
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned  int  amount);
};


#endif //CPP_CLAPTRAP_H
