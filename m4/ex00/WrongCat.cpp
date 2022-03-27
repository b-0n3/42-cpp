//
// Created by Abdelouahad Ait hamd on 3/27/22.
//

#include "WrongCat.h"

WrongCat::WrongCat() {
    this->setType("WrongCAt");
}

WrongCat::~WrongCat() {

}

WrongCat::WrongCat(const WrongCat &a) {
    *this = a;
}

WrongCat &WrongCat::operator=(const WrongCat &a) {
    WrongAnimal::operator=(a);
    return *this;
}

void WrongCat::makeSound() const {
    PRINT("WrongCat  wrongCat sound")
    PRINTLN()
}
