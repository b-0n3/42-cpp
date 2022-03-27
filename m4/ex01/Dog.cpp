//
// Created by Abdelouahad Ait hamd on 3/27/22.
//

#include "Dog.h"

Dog::~Dog(){
    delete this->brain;
}

Dog::Dog():Animal() {
    this->setType("Dog");
    this->brain = new Brain();
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
    PRINT(" dog says: ")
    PRINT("Woof!")
    PRINTLN()
}

void Dog::setBrainIdeas() {
    std::string ideas[] = {"eat", "sleep", "play", "run"};
    for (int i = 0;i < 100;i++) {
        this->brain->setIdea(i, ideas[i % 4] +" " + std::to_string(i));
    }
}

Brain *Dog::getBrain() const {
    return brain;
}

void Dog::setBrain(Brain *brain) {
    Dog::brain = brain;
}

