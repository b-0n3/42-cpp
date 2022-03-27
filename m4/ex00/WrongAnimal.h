//
// Created by Abdelouahad Ait hamd on 3/27/22.
//

#ifndef CPP_WRONGANIMAL_H
#define CPP_WRONGANIMAL_H
#include <iostream>
#define  PRINT(x)  std::cout << x;
#define  PRINTLN()  std::cout << std::endl;
#define _PRINTLN(x) PRINT(x) PRINTLN()

class WrongAnimal {
private:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(const std::string &type);
    WrongAnimal(const WrongAnimal &a);
    ~WrongAnimal();
    WrongAnimal &operator=(const WrongAnimal &a);
    void makeSound() const;
    const std::string &getType() const;
    void setType(const std::string &type);
};


#endif //CPP_WRONGANIMAL_H
