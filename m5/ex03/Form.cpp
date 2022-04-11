//
// Created by Abdelouahad Ait hamd on 3/28/22.
//

#include "Form.h"
#include "Bureaucrat.h"

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

void Form::setSigned(const bool signed_)   {
    this->_signed =signed_ ;
}


std::ostream &operator<<(std::ostream &os, const Form &src) {
    os << "Form " << src.getName() << " is "
    <<(src.getSigned() ? "signed" :(
            "not signed and has a grade to sign of " +
    std::to_string(src.getGradeToSign()) +
    " and a grade to execute of " +
    std::to_string(src.getGradeToExecute())));
    return os;
}

Form::FormNotSignedException::FormNotSignedException() {
    std::cout << "Form not signed" << std::endl;
}

const char *Form::FormNotSignedException::what() const throw() {
    return "Form not signed";
}

Form::FileCreationException::FileCreationException() {
    std::cout << "File creation failed" << std::endl;
}

const char *Form::FileCreationException::what() const throw() {
    return "File creation failed";
}
