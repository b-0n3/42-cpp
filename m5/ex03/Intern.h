//
// Created by Abdelouahad Ait hamd on 3/31/22.
//

#ifndef CPP_INTERN_H
#define CPP_INTERN_H
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"

typedef Form *(*fptr)(std::string const &target);
class Intern {
private:
   static  Form *createRobotomyRequestForm(std::string const &target);
   static  Form *createPresidentialPardonForm(std::string const &target);
   static Form *createShrubberyCreationForm(std::string const &target);
public:
    Intern();
    Intern(Intern const &src);
    ~Intern();
    Intern &operator=(Intern const &rhs);
    Form *makeForm(std::string const &formName, std::string const &target) throw(Intern::FormNotFoundException);
     class FormNotFoundException : public std::exception {
    public:
        FormNotFoundException();
        const char *what() const throw();
    };
};


#endif //CPP_INTERN_H
