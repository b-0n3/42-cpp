//
// Created by Abdelouahad Ait hamd on 3/27/22.
//

#ifndef CPP_WRONGCAT_H
#define CPP_WRONGCAT_H
#include "WrongAnimal.h"

class WrongCat : public WrongAnimal{
public:
    WrongCat();
    ~WrongCat();
    WrongCat(const WrongCat &a);
    WrongCat &operator=(const WrongCat &a);
    void makeSound() const;
};


#endif //CPP_WRONGCAT_H
