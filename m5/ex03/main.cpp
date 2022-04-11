//
// Created by Abdelouahad Ait hamd on 3/27/22.
//
#include "Intern.h"
int main()
{
    Intern inter;
    Form* shrubberyForm = inter.makeForm("shrubbery creation", "Garden");
    Form* robotomyForm = inter.makeForm("robotomy request", "Well");
    Form* presidentialPardonForm = inter.makeForm("presidential pardon", "yass");
    Bureaucrat	bureaucrat1("me", 1);

    try
    {
        bureaucrat1.signForm(*shrubberyForm);
        bureaucrat1.signForm(*robotomyForm);
        bureaucrat1.signForm(*presidentialPardonForm);
        bureaucrat1.executeForm(*shrubberyForm);
        bureaucrat1.executeForm(*robotomyForm);
        bureaucrat1.executeForm(*presidentialPardonForm);
        Form *randomShit = inter.makeForm("random shit", "random");
        bureaucrat1.signForm(*randomShit);
        delete randomShit;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << bureaucrat1 << std::endl;

    std::cout << *shrubberyForm << std::endl;

    std::cout << *robotomyForm << std::endl;

    std::cout << *presidentialPardonForm << std::endl;
    delete shrubberyForm;
    delete robotomyForm;
    delete presidentialPardonForm;
    return 0;
}