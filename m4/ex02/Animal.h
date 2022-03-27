//
// Created by Abdelouahad Ait hamd on 3/27/22.
//

#ifndef CPP_ANIMAL_H
#define CPP_ANIMAL_H
#include <iostream>
#define  PRINT(x)  std::cout << x;
#define  PRINTLN()  std::cout << std::endl;

class Animal {
protected:
    std::string type;
public:
    virtual ~Animal();
    virtual void makeSound() const = 0;
    const std::string &getType() const;
    void setType(const std::string &type);
};


#endif //CPP_ANIMAL_H
