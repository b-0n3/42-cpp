//
// Created by Abdelouahad Ait hamd on 3/28/22.
//
#pragma  once
#include"Bureaucrat.h"
#include <iostream>
class Bureaucrat;
class Form {
private:
    std::string const _name;
    bool _signed;
    int const _gradeToSign;
    int const _gradeToExecute;
public:
    Form();
    Form(Form const &src);
    ~Form();
    Form &operator=(Form const &rhs);
    Form(std::string const name, int const gradeToSign, int const gradeToExecute);
    std::string const getName() const;
    bool getSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
     void beSigned(Bureaucrat const &bureaucrat)throw(Form::GradeTooLowException) ;
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
std::ostream &operator<<(std::ostream &o, Form const &rhs);

