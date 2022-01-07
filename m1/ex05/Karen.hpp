//
// Created by b0n3 on 1/8/22.
//

#ifndef INC_42_CPP_KAREN_HPP
#define INC_42_CPP_KAREN_HPP
#include <iostream>
class Karen {
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
public:
    Karen();
    ~Karen();
    void complain(std::string level);
};


#endif //INC_42_CPP_KAREN_HPP
