// Created by Abdelouahad Ait hamd on 12/8/21.
//

#ifndef CPP00_CONTACT_H
#define CPP00_CONTACT_H

#include <iostream>
#include <iomanip>

class Contact {
public:
    int         id;
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;
    ~Contact();
    Contact();
    void print() const;

    friend std::ostream &operator<<(std::ostream &os, const Contact &contact);
};

#endif //CPP00_CONTACT_H
