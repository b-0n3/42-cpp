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
protected:
    ClapTrap(const std::string &name, unsigned int hitPoint, unsigned int energyPoint, unsigned int attackDamagePoint);
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &a);
   virtual ~ClapTrap();
    ClapTrap & operator=(const ClapTrap &a);
    virtual void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned  int  amount);
    const std::string &getName() const;
    void setName(const std::string &name);
    unsigned int getHitPoint() const;
    void setHitPoint(unsigned int hitPoint);
    unsigned int getEnergyPoint() const;
    void setEnergyPoint(unsigned int energyPoint);
    unsigned int getAttackDamagePoint() const;
    void setAttackDamagePoint(unsigned int attackDamagePoint);
};


#endif //CPP_CLAPTRAP_H
