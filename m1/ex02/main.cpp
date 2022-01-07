//
// Created by Abdelouahad Ait hamd on 1/5/22.
//
#include <iostream>

int main()
{
    std::string   string =  "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;
    std::cout<<"string address: " << &string << std::endl;
    std::cout<<"stringPTR address: " << stringPTR << std::endl;
    std::cout<<"stringREF address: " << &stringREF << std::endl;

    std::cout<<"the string using stringPTR is : " << *stringPTR << std::endl;
    std::cout<<"the string using stringREF us : " << stringREF << std::endl;

}
