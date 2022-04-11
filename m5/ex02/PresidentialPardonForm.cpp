//
// Created by Abdelouahad Ait hamd on 3/31/22.
//

#include "PresidentialPardonForm.h"

void PresidentialPardonForm::execute(
        const Bureaucrat &executor) const  throw(FileCreationException , FormNotSignedException,
GradeTooHighException, GradeTooLowException) {
    if (!this->getSigned())
        throw FormNotSignedException();
    if (executor.getGrade() > this->getGradeToSign())
        throw GradeTooLowException();
    else
        std::cout <<  this->getTarget() << " has been pardoned by Zaphod Beeblebrox"<< std::endl;
}

void PresidentialPardonForm::beSigned(
        const Bureaucrat &bureaucrat)  throw(GradeTooLowException) {
    if (bureaucrat.getGrade() > this->getGradeToSign())
        throw GradeTooLowException();
    else
        this->setSigned(true);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) {
    *this = src;
    std::cout   << "Presidential pardon form has been copied" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):
Form("PresidentialPardonForm",
     25, 5) {
    this->_target = target;
}


PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "Presidential pardon form has been destroyed" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs) {
    this->setTarget(rhs.getTarget());
    Form::operator=(rhs);
    std::cout<< "Presidential pardon form has been copied" << std::endl;
    return *this;
}

const std::string &PresidentialPardonForm::getTarget() const {
    return _target;
}

void PresidentialPardonForm::setTarget(const std::string &target) {
    _target = target;
}
