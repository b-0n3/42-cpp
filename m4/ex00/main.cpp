//
// Created by Abdelouahad Ait hamd on 3/27/22.
//

#include "Dog.h"
#include "Cat.h"
#include "WrongCat.h"
int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* wmeta = new WrongAnimal();
    const WrongAnimal* wi = new WrongCat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    std::cout << wi->getType() << " " << std::endl;
    wi->makeSound(); //will output the cat sound!
    wmeta->makeSound();
    delete meta;
    delete i;
    delete j;
    delete wi;
    delete wmeta;
    return 0;
}