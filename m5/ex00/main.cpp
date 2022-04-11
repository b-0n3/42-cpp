//
// Created by Abdelouahad Ait hamd on 3/27/22.
//
#include "Bureaucrat.h"
int main(){
try {
    Bureaucrat b("b", 150);
    std::cout<< b << std::endl;
    Bureaucrat c("c", 1);
    std::cout<< c << std::endl;
    Bureaucrat d("d", 112);
    std::cout   << d << std::endl;
    Bureaucrat e("e", 0);
    std::cout   << e << std::endl;
    Bureaucrat f("f", 150);
    std::cout   << f << std::endl;
}catch (std::exception &e){
    std::cout << e.what() << std::endl;
}
    return 0;
}

