//
// Created by Abdelouahad Ait hamd on 3/31/22.
//

#include "Intern.h"

Intern::Intern() {
    std::cout << "Intern constructor called" << std::endl;
}

Intern::Intern(const Intern &src) {
    *this = src;
}

Intern::~Intern() {

}

Intern &Intern::operator=(const Intern &rhs) {
    if (this != &rhs) {
        std::cout << "Intern operator= called" << std::endl;
    }
    return *this;
}

Form *Intern::makeForm(
        std::string const &formName,
        std::string const &target)
        throw(Intern::FormNotFoundException) {
    Form *form = nullptr;
    std::string formNames[3] =
            {"robotomy request",
             "presidential pardon", "shrubbery creation"};
    fptr formConstructors[3] = {
            Intern::createRobotomyRequestForm,
            Intern::createPresidentialPardonForm,
            Intern::createShrubberyCreationForm
    };
    for (int i = 0; i < 3; i++) {
        if (formName == formNames[i]) {
            form = formConstructors[i](target);
            break;
        }
    }
    if (form == nullptr) {
        throw FormNotFoundException();
    }
    return form;
}

Form *Intern::createRobotomyRequestForm(std::string const &target) {
    std::cout << "Intern creates a robotomy request form for " << target << std::endl;
    return new RobotomyRequestForm(target);
}

Form *Intern::createPresidentialPardonForm(std::string const  &target) {
    std::cout << "Intern creates a presidential pardon form for " << target << std::endl;
    return new PresidentialPardonForm(target);
}

Form *Intern::createShrubberyCreationForm(std::string const  &target) {
    std::cout<< "Intern creates a shrubbery creation form for " << target << std::endl;
    return new ShrubberyCreationForm(target);
}

const char *Intern::FormNotFoundException::what() const throw() {
    return "Form not found";
}

Intern::FormNotFoundException::FormNotFoundException() {
    std::cout << "FormNotFoundException constructor called" << std::endl;
}

