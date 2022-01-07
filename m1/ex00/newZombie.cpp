//
// Created by Abdelouahad Ait hamd on 1/5/22.
//

#include "zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie *zombie = new Zombie(name);
    return zombie;
}