//
// Created by Abdelouahad Ait hamd on 1/6/22.
//

#ifndef CPP_HUMANB_HPP
#define CPP_HUMANB_HPP
#include "Weapon.hpp"

class HumanB {
private:
    Weapon *weapon;
    std::string name;
public:
    HumanB(std::string name);
    ~HumanB();
    void attack();
    void setWeapon(Weapon &weapon);
};



#endif //CPP_HUMANB_HPP
