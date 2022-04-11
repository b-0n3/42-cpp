//
// Created by Abdelouahad Ait hamd on 3/28/22.
//

#include "Form.h"
#include "Bureaucrat.h"
#include "../ex02/Form.h"


Form::Form(): _signed(false), _gradeToSign(1) , _gradeToExecute(1) {

    std::cout << "form created" << std::endl;

}
Form::Form(const std::string name, const int gradeToSign, const int gradeToExecute)
:_name(name), _signed(false), _gradeToSign(gradeToSign) , _gradeToExecute(gradeToExecute) {
    if (gradeToSign < 1)
        throw Form::GradeTooLowException();
    if (gradeToSign > 150)
        throw Form::GradeTooLowException();
    std::cout << "Form created" << std::endl;
}

Form::Form(const Form &src): _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute){
    *this = src;
    std::cout << "Form copy constructor called" << std::endl;
}

Form::~Form() {
    std::cout << "Form destructor called" << std::endl;
}

void Form::beSigned(const Bureaucrat &b) throw(Form::GradeTooLowException){
    if (b.getGrade() > this->_gradeToSign)
        throw Form::GradeTooLowException();
    else
        this->_signed = true;
}


bool Form::getSigned() const {
    return this->_signed;
}
int Form::getGradeToSign() const {
    return _gradeToSign;
}

int Form::getGradeToExecute() const {
    return _gradeToExecute;
}


const char *Form::GradeTooHighException::what() const throw() {
    return "Grade is too high";
}

Form::GradeTooHighException::GradeTooHighException() {
}

Form::GradeTooLowException::GradeTooLowException() {
}

const char *Form::GradeTooLowException::what() const throw() {
    return "Grade is too low";
}

Form &Form::operator=(const Form &rhs) {
    if(this != &rhs) {
        this->_signed = rhs._signed;
    }
    return *this;
}

std::string const Form::getName() const {
    return this->_name;
}

std::ostream &operator<<(std::ostream &os, const Form &src) {
    os << "Form " << src.getName() << " is "
    <<(src.getSigned() ? "signed" : "not signed")
    << " and requires a grade of " << src.getGradeToSign()
    << " to sign.";
    return os;
}

