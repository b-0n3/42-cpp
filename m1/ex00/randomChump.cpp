//
// Created by Abdelouahad Ait hamd on 1/5/22.
//

#include "zombie.hpp"


void randomChump(std::string name)
{
    Zombie zombie(name);
    zombie.announce();
}