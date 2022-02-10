//
// Created by Abdelouahad Ait hamd on 2/10/22.
//

#include "Fixed.h"
int main(  ) {
    Fixed a;
    Fixed b( a );
    Fixed c;
    c = b;
    c.setRawBits(10);
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    return 0;
}