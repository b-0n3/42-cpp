//
// Created by Abdelouahad Ait hamd on 2/10/22.
//

#ifndef CPP_FIXED_H
#define CPP_FIXED_H
#include <iostream>
#include <cmath>

#define  PRINT(x)  std::cout << x<< std::endl;
#define SCALE(x) (x<<Fixed::fractionalBits)
#define UNSCALE(x) (x>>Fixed::fractionalBits)
class Fixed {
private:
    int rawBits;
    static const int fractionalBits = 8;
public:
    Fixed();
    Fixed(const Fixed  &copy);
    Fixed(const int value);
    Fixed(const float value);
   float  toFloat() const;
    int toInt() const;
    ~Fixed();
    Fixed& operator=(Fixed const&f);
    int getRawBits(void) const;
    void setRawBits(int const raw);


};

std::ostream &operator<<(std::ostream &ostream, Fixed const & f);

#endif
