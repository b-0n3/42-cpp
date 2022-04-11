//
// Created by Abdelouahad Ait hamd on 3/31/22.
//

#pragma once
#include "Form.h"

class ShrubberyCreationForm :virtual public Form {
private:
    std::string target;
public:
    ShrubberyCreationForm(std::string _target);
    ShrubberyCreationForm(ShrubberyCreationForm const &src);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
    void execute(Bureaucrat const &executor) const throw(FileCreationException , FormNotSignedException,
    GradeTooHighException, GradeTooLowException);
    void beSigned(const Bureaucrat &bureaucrat)  throw(GradeTooLowException) ;

    const std::string &getTarget() const;

    void setTarget(const std::string &target);
};
