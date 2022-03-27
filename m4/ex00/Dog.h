//
// Created by Abdelouahad Ait hamd on 3/27/22.
//

#ifndef CPP_DOG_H
#define CPP_DOG_H
#include "Animal.h"

class Dog : public virtual Animal{
public:
    Dog();
    ~Dog();
    Dog(const Dog &a);
    Dog &operator=(const Dog &a);
    void makeSound()const;
};


#endif //CPP_DOG_H
