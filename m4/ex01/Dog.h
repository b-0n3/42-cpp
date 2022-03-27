//
// Created by Abdelouahad Ait hamd on 3/27/22.
//

#ifndef CPP_DOG_H
#define CPP_DOG_H
#include "Animal.h"
#include "Brain.h"

class Dog : public virtual Animal{
private:
    Brain *brain;
public:
    Dog();
    ~Dog();
    Dog(const Dog &a);
    Dog &operator=(const Dog &a);
    void makeSound()const;
    void setBrainIdeas();

    Brain *getBrain() const;

    void setBrain(Brain *brain);
};


#endif //CPP_DOG_H
