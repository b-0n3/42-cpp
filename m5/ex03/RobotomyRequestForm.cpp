//
// Created by Abdelouahad Ait hamd on 3/31/22.
//

#include "RobotomyRequestForm.h"

void RobotomyRequestForm::execute(
        const Bureaucrat &executor)const  throw(FileCreationException , FormNotSignedException,
GradeTooHighException, GradeTooLowException) {
    if (!this->getSigned())
        throw Form::FormNotSignedException();
    if (executor.getGrade() > this->getGradeToSign())
        throw GradeTooLowException();
    if (std::rand() & 1)
        std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
    else
        std::cout << this->getTarget() << " has not been robotomized"<< std::endl;
}

void RobotomyRequestForm::beSigned(
        const Bureaucrat &bureaucrat)  throw(GradeTooLowException) {
    if (bureaucrat.getGrade() > this->getGradeToSign())
        throw GradeTooLowException();
    else
        this->setSigned(true);
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) {
    *this = src;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
    Form::operator=(rhs);
    return *this;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):
Form("RobotomyRequestForm", 72, 45), target(target) {
    this->setTarget(target);
}

const std::string &RobotomyRequestForm::getTarget() const {
    return target;
}

void RobotomyRequestForm::setTarget(const std::string &target) {
    RobotomyRequestForm::target = target;
}
