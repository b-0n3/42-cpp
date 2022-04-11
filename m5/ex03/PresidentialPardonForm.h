//
// Created by Abdelouahad Ait hamd on 3/31/22.
//

#ifndef CPP_PRESIDENTIALPARDONFORM_H
#define CPP_PRESIDENTIALPARDONFORM_H
#include "Form.h"

class PresidentialPardonForm: virtual public  Form {
private:
    std::string _target;
public:
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm const &src);
    ~PresidentialPardonForm();
    PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
    void execute(const Bureaucrat &executor) const throw(FileCreationException , FormNotSignedException,
    GradeTooHighException, GradeTooLowException);
    void beSigned(const Bureaucrat &bureaucrat)  throw(GradeTooLowException) ;

    const std::string &getTarget() const;

    void setTarget(const std::string &target);
};


#endif //CPP_PRESIDENTIALPARDONFORM_H
