//
// Created by Abdelouahad Ait hamd on 3/27/22.
//

#include "Cat.h"
#include "../ex01/Brain.h"
#include "../ex02/Cat.h"


Cat::Cat() : Animal() {
    this->setType("Cat");
}

Cat::~Cat() {

}

Cat::Cat(const Cat &a) {
  *this = a;
}

Cat &Cat::operator=(const Cat &a) {
    Animal::operator=(a);
    return *this;
}

void Cat::makeSound() const{
    PRINT(this->getType())
    PRINT(" cat sound")
    PRINTLN()
}

Brain *Cat::getBrain() const {
    return brain;
}

void Cat::setBrain(Brain *brain) {
    Cat::brain = brain;
}

