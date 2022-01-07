//
// Created by Abdelouahad Ait hamd on 1/5/22.
//

#include "Zombie.hpp"

int main()
{
    Zombie *zomies;
    zomies = zombieHorde(5, "b-0n3");
    for (int i = 0;i <5 ;i++)
        (zomies + i)->announce();
    delete[] zomies;
}