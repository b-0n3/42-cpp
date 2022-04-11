//
// Created by Abdelouahad Ait hamd on 3/27/22.
//

#pragma once
#include <iostream>
#include "Form.h"
class Form;
class Bureaucrat {
private:
    std::string const _name;
    int _grade;
public:
    Bureaucrat(std::string const& name, int grade);
    Bureaucrat(Bureaucrat const &src);
    ~Bureaucrat();
    Bureaucrat &operator=(Bureaucrat const &rhs);
    std::string const &getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();
    void signForm(Form &form);
    class GradeTooHighException : public std::exception {
    public:
        GradeTooHighException();
        virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception {
    public:
        GradeTooLowException();
        virtual const char *what() const throw();
    };

};
std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);

