

#include "PhoneBook.h"


PhoneBook::~PhoneBook() {}

PhoneBook::PhoneBook() {
    _index = 0;
}

void PhoneBook::search() {
    int i;


    i = 0;
    std::cout <<  std::left << std::setw(10) << "index"
            << " | " <<  std::left << std::setw(10) <<"first name"
            << " | " <<  std::left << std::setw(10)<<"last name"
            << " | "<<  std::left << std::setw(10)<< "nickname" << std::endl;
    while (i < 8)
    {
        if (_contacts[i].id != -1)
             _contacts[i].print();
        i++;
    }


    this->lookForContact();
}

void PhoneBook::loop() {
    std::string buff;

    while (true)
    {
        std::cout << "please enter a command ( ADD -- SEARCH -- EXIT) :" << std::endl;
        std::cin >> buff;
        if (buff == "EXIT")
            return;
        if (buff == "ADD")
            this->add();
        if (buff == "SEARCH")
            this->search();
    }
}

void PhoneBook::add() {
    _contacts[_index % 8].id = _index % 8;
    std::cout << "first name : ";
    std::cin >> _contacts[_index % 8].firstName;
    std::cout << "last name: ";
    std::cin >> _contacts[_index % 8].lastName;
    std::cout << "nickname : ";
    std::cin >> _contacts[_index % 8].nickName;
    std::cout << "phone number : ";
    std::cin >> _contacts[_index % 8].phoneNumber;
    std::cout << "darkest secret : ";
    std::cin >> _contacts[_index % 8].darkestSecret;
    _index++;
    _index = _index % 8;
}

void PhoneBook::lookForContact() {
    int id;

    std::cout<< "please enter a contact Id: " << std::endl;
    std::cin>> id;
    if (id < 0 ||  id >= 8)
    {
        std::cout << "invalid id" << std::endl;
        this->lookForContact();
    }else{
        std::cout<< this->_contacts[id];
    }
}
