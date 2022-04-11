//
// Created by Abdelouahad Ait hamd on 3/27/22.
//

#include "Bureaucrat.h"
#include "Form.h"

Bureaucrat::Bureaucrat(const std::string& name, int grade):_name(name) {
    std::cout << "Constructor Bureaucrat" << std::endl;

    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat " << this->getName() << " has been destroyed" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs) {
    std::cout << "Assignation operator called" << std::endl;

    if (this != &rhs) {
        if (rhs.getGrade() < 1)
            throw Bureaucrat::GradeTooHighException();
        else if (rhs.getGrade() > 150)
            throw Bureaucrat::GradeTooLowException();
        else
            this->_grade = rhs.getGrade();
    }
    return *this;
}

const std::string &Bureaucrat::getName() const {

    return this->_name;
}

int Bureaucrat::getGrade() const {

    return this->_grade;
}

void Bureaucrat::incrementGrade() {
    std::cout << "incrementGrade called" << std::endl;
    if (this->getGrade() - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade += 1;
}

void Bureaucrat::decrementGrade()  {

    std::cout << "decrementGrade called" << std::endl;
    if (this->getGrade() + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade -= 1;
}

void Bureaucrat::signForm(Form &form) {
    try{
        form.beSigned(*this);
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << this->getName() << " couldn't sign "
        << form.getName() << "because " << e.what()<< std::endl;
    }

}

Bureaucrat::GradeTooHighException::GradeTooHighException() {
    std::cout << "GradeTooHighException constructor called" << std::endl;

}



const char *Bureaucrat::GradeTooHighException::what() const throw() {
    std::cout  <<  "GradeTooHighException what called" << std::endl;
    return "Grade is too high";
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {
    std::cout  <<  "GradeTooLowException constructor called" << std::endl;

}



const char *Bureaucrat::GradeTooLowException::what() const throw() {
    std::cout << "GradeTooLowException what called" << std::endl;
    return "Grade too low";
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &rhs) {
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return o;
}
