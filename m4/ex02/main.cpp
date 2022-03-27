//
// Created by Abdelouahad Ait hamd on 3/27/22.
//

#include "Dog.h"
#include "Cat.h"
int main()
{
    const Animal **pAnimal =   new const Animal*[10];
    for (int i = 0; i < 10; i++)
    {
        if (i > 5)
        {
            pAnimal[i] = new Dog();
        }
        else
        {
            pAnimal[i] = new Cat();
        }
    }
    for (int i = 0; i < 10; i++)
        pAnimal[i]->makeSound();
    for (int i = 0; i < 10; i++)
        delete pAnimal[i];
    system("leaks animalBrain");
    return 0;
}