//
// Created by Abdelouahad Ait hamd on 1/5/22.
//

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie {
private:
    std::string name;
public:
    Zombie(std::string name);
    Zombie(){
        std::cout<< "dsf"<< std::endl;
    }
    void setName(std::string name);
    ~Zombie();
    void announce(void);
};
Zombie* zombieHorde(int N, std::string name);
#endif
