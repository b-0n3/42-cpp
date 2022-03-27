//
// Created by Abdelouahad Ait hamd on 3/27/22.
//

#include "Brain.h"

Brain::Brain() {
    std::cout << "Brain created with default constructor" << std::endl;
    this->ideas = new std::string[100];
}

Brain::Brain(std::string *ideas):  index(0) {
    std::cout << "Brain created with custom constructor" << std::endl;
    this->ideas = ideas;
}

Brain::~Brain() {
    std::cout << "Brain deleted" << std::endl;

    delete []ideas;
}
Brain::Brain(const Brain &other) {
    std::cout << "Brain created with copy constructor" << std::endl;
    *this = other;
}

Brain &Brain::operator=(const Brain &other) {
    std::cout << "Brain copied" << std::endl;
    if (this != &other) {
        this->index = other.index;
        for (int i = 0; i < this->index; i++) {
            this->ideas[i] = other.ideas[i];
        }
    }
    return *this;
}

void Brain::addIdea(std::string idea) {
    std::cout << "Idea added" << std::endl;
    this->ideas[this->index] = idea;
    this->index++;
}

void Brain::printIdeas() {
    std::cout  << "Printing ideas" << std::endl;
    for (int i = 0; i < this->index; i++) {
        std::cout << this->ideas[i] << std::endl;
    }
}

std::string &Brain::getIdea(int index) {
    std::string *l = nullptr;
    std::cout << "Getting idea" << std::endl;
    if (index < this->index) {
        return this->ideas[index];
    }
    return *l;
}

void Brain::setIdea(int index, std::string idea) {
    std::cout << "Setting idea" << std::endl;
    if (index < this->index) {
        this->ideas[index] = idea;
    }
}
