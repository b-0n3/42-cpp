//
// Created by Abdelouahad Ait hamd on 3/27/22.
//

#ifndef CPP_CAT_H
#define CPP_CAT_H
#include "Animal.h"
#include "Brain.h"

class Cat : public virtual Animal{
private:
    Brain *brain;
public:
    Cat();
    ~Cat();
    Cat(const Cat &a);
    Cat &operator=(const Cat &a);
    void makeSound() const;
    void setBrainIdeas();

    Brain *getBrain() const;

    void setBrain(Brain *brain);
};


#endif //CPP_CAT_H
