//
// Created by Abdelouahad Ait hamd on 12/11/21.
//

#ifndef CPP00_PHONEBOOK_H
#define CPP00_PHONEBOOK_H
#include "Contact.h"

class PhoneBook {
private:
    Contact _contacts[8];
    int _index;
public:
    PhoneBook();
    ~PhoneBook();
    void search();
    void lookForContact();
    void loop();
    void add();

};


#endif //CPP00_PHONEBOOK_H
