//
// Created by Abdelouahad Ait hamd on 3/27/22.
//

#include "Cat.h"

Cat::Cat() {
    this->setType("Cat");
    this->brain = new Brain();
}

Cat::~Cat() {
    delete this->brain;
}

Cat::Cat(const Cat &a) {
  *this = a;
}

Cat &Cat::operator=(const Cat &a) {
    this->setType(a.getType());
    this->setBrain(a.getBrain());
    return *this;
}

void Cat::makeSound() const{
    PRINT(this->getType())
    PRINT(" cat says meow")
    PRINTLN()
}

void Cat::setBrainIdeas() {
   std::string ideas[] = {"eat", "sleep", "play", "meow", "purr"};
   for (int i = 0 ; i<100; i++) {
       this->brain->addIdea(ideas[i%5] + " " + std::to_string(i));
   }
}

Brain *Cat::getBrain() const {
    return brain;
}

void Cat::setBrain(Brain *brain) {
    Cat::brain = brain;
}

