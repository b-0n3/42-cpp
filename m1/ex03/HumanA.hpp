//
// Created by Abdelouahad Ait hamd on 1/6/22.
//

#ifndef CPP_HUMANA_HPP
#define CPP_HUMANA_HPP
#include "Weapon.hpp"

class HumanA {
private:
    Weapon weapon;
    std::string name;
public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void attack();

};


#endif //CPP_HUMANA_HPP
