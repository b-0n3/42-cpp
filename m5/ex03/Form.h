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
protected:
    void setSigned(const bool signed_);
public:
    Form();
    Form(Form const &src);
   virtual ~Form();
    Form &operator=(Form const &rhs);
    Form(std::string const name, int const gradeToSign, int const gradeToExecute);
    std::string const getName() const;
    bool getSigned() const;

    int getGradeToSign() const;
    int getGradeToExecute() const;
    virtual void execute(Bureaucrat const &executor) const
    throw(FileCreationException , FormNotSignedException,
            GradeTooHighException, GradeTooLowException)  = 0;
    virtual void beSigned(Bureaucrat const &bureaucrat)
    throw(GradeTooLowException) = 0;
    class FileCreationException : public std::exception {
    public:
        FileCreationException();
        virtual const char *what() const throw();
    };
    class FormNotSignedException : public std::exception {
    public:
        FormNotSignedException();
        virtual const char *what() const throw();
    };
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

