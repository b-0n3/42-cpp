//
// Created by Abdelouahad Ait hamd on 3/27/22.
//
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"
int main()
{
    Bureaucrat X("jhon", 7);
    // Forms take only one parameter in their constructor, which is the target.

    ShrubberyCreationForm a("sh");
    PresidentialPardonForm b("pr");
    RobotomyRequestForm c( "ro");


    // There is a Form::execute(Bureaucrat const & executor) method that works as specified by the subject.

    X.signForm(a);
    X.signForm(b);
    X.signForm(c);

    a.execute(X);
        //b.execute(X);
    c.execute(X);

    try
    {
        b.execute(X);
        /* code */
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    // There is a Bureaucrat::executeForm(Form const & form) that works as specified by the subject.


    X.executeForm(a);
    //X.executeForm(b);
    X.executeForm(c);

    try
    {
        X.executeForm(b);
        /* code */
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}