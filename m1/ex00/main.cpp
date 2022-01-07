//
// Created by Abdelouahad Ait hamd on 1/5/22.
//

#include "zombie.hpp"

int main()
{
    Zombie zombie("b-0n3");
    zombie.announce();

    Zombie *ptr = newZombie("hell.js");

    ptr->announce();
    delete ptr;
    randomChump("mess.css");
}