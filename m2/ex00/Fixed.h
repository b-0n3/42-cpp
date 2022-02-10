//
// Created by Abdelouahad Ait hamd on 2/10/22.
//

#ifndef CPP_FIXED_H
#define CPP_FIXED_H
#include <iostream>
#define  PRINT(x)  std::cout << x<< std::endl;
#define SCALE(x) (x<<Fixed::fractionalBits)
#define UNSCALE(x) (x>>Fixed::fractionalBits)
class Fixed {
private:
    int rawBits;
    static const int fractionalBits = 8;
public:
    Fixed();
    Fixed(Fixed  &copy);
    ~Fixed();
    Fixed& operator=(Fixed &copy);
    int getRawBits(void);
    void setRawBits(int const raw);


};




#endif
