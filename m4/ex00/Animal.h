//
// Created by Abdelouahad Ait hamd on 3/27/22.
//

#ifndef CPP_ANIMAL_H
#define CPP_ANIMAL_H
#include <iostream>
#define  PRINT(x)  std::cout << x;
#define  PRINTLN()  std::cout << std::endl;
#define _PRINTLN(x) PRINT(x) PRINTLN()

class Animal {
protected:
    std::string type;
public:
    Animal();
    virtual ~Animal();
    Animal(const Animal &a);
    Animal &operator=(const Animal &a);
    virtual void makeSound() const;
    const std::string &getType() const;
    void setType(const std::string &type);
};


#endif //CPP_ANIMAL_H
