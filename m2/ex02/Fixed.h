//
// Created by Abdelouahad Ait hamd on 2/10/22.
//

#ifndef CPP_FIXED_H
#define CPP_FIXED_H
#include <iostream>
#include <cmath>

#define  PRINT(x)  std::cout << x<< std::endl;
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
    Fixed &operator=(Fixed const &f);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    Fixed &operator++(int);
    Fixed operator++();
    Fixed &operator--(int);
    Fixed operator--();
    bool operator<(Fixed const &a)const;
    bool operator<=(Fixed const &a)const;
    bool operator>(Fixed const &a)const;
    bool operator>=(Fixed const &a)const;
    bool operator==(Fixed const &a)const;
    bool  operator!=(Fixed const &a)const;
    Fixed operator+(Fixed const &a) const;
    Fixed operator-(Fixed const &a) const;
    Fixed operator*(Fixed const &a);
    Fixed operator/(Fixed const &a)const;
    static Fixed& min(Fixed const &a, Fixed const &b);
    static Fixed& min(Fixed  &a, Fixed  &b);
    static Fixed& max(Fixed const &a, Fixed const &b);
    static Fixed& max(Fixed &a, Fixed &b);

};

std::ostream &operator<<(std::ostream &ostream, Fixed const & f);

#endif
