//
// Created by Abdelouahad Ait hamd on 3/27/22.
//

#ifndef CPP_CAT_H
#define CPP_CAT_H
#include "Animal.h"

class Cat : public virtual Animal{
public:
    Cat();
    ~Cat();
    Cat(const Cat &a);
    Cat &operator=(const Cat &a);
    void makeSound() const;
};


#endif //CPP_CAT_H
