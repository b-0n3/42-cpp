//
// Created by Abdelouahad Ait hamd on 3/27/22.
//

#include "Dog.h"
#include "../ex01/Brain.h"
#include "../ex02/Dog.h"


Dog::~Dog(){
}

Dog::Dog():Animal() {
    this->setType("Dog");
}

Dog::Dog(const Dog &a) {
    *this = a;
}

Dog &Dog::operator=(const Dog &a) {
   Animal::operator=(a);
   return *this;
}

void Dog::makeSound() const{
    PRINT(this->getType())
    PRINT(" dog sound")
    PRINTLN()
}

Brain *Dog::getBrain() const {
    return brain;
}

void Dog::setBrain(Brain *brain) {
    Dog::brain = brain;
}

void Dog::addIdeas() {
    for(int i = 0; i < 100; i++)
    {
        this->brr
    }
}

