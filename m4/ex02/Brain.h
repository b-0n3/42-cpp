//
// Created by Abdelouahad Ait hamd on 3/27/22.
//

#ifndef CPP_BRAIN_H
#define CPP_BRAIN_H
#include <iostream>

class Brain {
private:
    std::string *ideas;
    int index;
public:
    Brain();
    Brain(std::string ideas[100]);
    ~Brain();
    Brain(const Brain &other);
    Brain &operator=(const Brain &other);
    void addIdea(std::string idea);
    void printIdeas();
    std::string &getIdea(int index);
    void setIdea(int index, std::string idea);
};


#endif //CPP_BRAIN_H
