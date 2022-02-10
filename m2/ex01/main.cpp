//
// Created by Abdelouahad Ait hamd on 2/10/22.
//

#include "Fixed.h"
int main( void ) {
    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );
    a = Fixed( 1234.4321f );
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    std::cout << "a is " << a.toFloat() << " as integer" << std::endl;
    std::cout << "b is " << b.toFloat() << " as integer" << std::endl;
    std::cout << "c is " << c.toFloat() << " as integer" << std::endl;
    std::cout << "d is " << d.toFloat() << " as integer" << std::endl;
    return 0;
}