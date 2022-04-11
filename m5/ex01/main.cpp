//
// Created by Abdelouahad Ait hamd on 3/27/22.
//
#include "Bureaucrat.h"
#include "Form.h"
int main(){
try {
    Bureaucrat b("b", 12);
    std::cout<< b << std::endl;
    Bureaucrat c("c", 1);
    std::cout<< c << std::endl;
    Form f("f", 20, 1);
    std::cout<< f << std::endl;
    f.beSigned(b) ;
    f.beSigned(c);
    Bureaucrat d("d", 150);
    d.signForm(f);
    Bureaucrat e("ssd", 10);
    e.signForm(f);
}catch (std::exception &e){
    std::cout << e.what() << std::endl;
}
    return 0;
}

