//
// Created by Abdelouahad Ait hamd on 2/10/22.
//

#ifndef CPP_FIXED_H
#define CPP_FIXED_H
#include <iostream>
#define  PRINT(x)  std::cout << x<< std::endl;

class Fixed {
private:
    int rawBits;
    static const int fractionalBits = 8;
public:
    Fixed();
    Fixed(Fixed const  &copy);
    ~Fixed();
    Fixed& operator=(Fixed const  &copy);
    int getRawBits() const;
    void setRawBits(int raw);


};




#endif
