//
// Created by Abdelouahad Ait hamd on 3/31/22.
//

#include <fstream>
#include "ShrubberyCreationForm.h"

void ShrubberyCreationForm::execute(
        const Bureaucrat &executor)const  throw(FileCreationException , FormNotSignedException,
GradeTooHighException, GradeTooLowException) {
    if (!this->getSigned())
        throw FormNotSignedException();
    if (this->getGradeToExecute() < executor.getGrade())
        throw GradeTooLowException();
    else {
        std::string ss = this->getTarget() + "_shrubbery";
        std::ofstream f(ss);
        if (!f.is_open())
            throw FileCreationException();
        f << " \n";
        f << "                     / / /\n";
        f << "                   /        /  /     //    /\n";
        f << "                /                 /         /  /\n";
        f << "                                /\n";
        f << "                               /                //\n";
        f << "               /          /            /              /\n";
        f << "               /            '/,        /               /\n";
        f << "               /              'b      *\n";
        f << "                /              '$    //                //\n";
        f << "               /    /           $:   /:               /\n";
        f << "             //      /  //      */  @):        /   / /\n";
        f << "                          /     :@,@):   ,/**:'   /\n";
        f << "              /      /,         :@@*: //**'      /   /\n";
        f << "                       '/o/    /:(@'/@*'  /\n";
        f << "               /  /       bq,//:,@@*'   ,*      /  /\n";
        f << "                          ,p$q8,:@)'  /p*'      /\n";
        f << "                   /     '  / '@@Pp@@*'    /  /\n";
        f << "                    /  / //    Y7'.'     /  /\n";
        f << "                              :@):.\n";
        f << "                             .:@:'.\n";
        f << "                           .::(@:.\n";
        f.close();
    }
}

void ShrubberyCreationForm::beSigned(const Bureaucrat
&bureaucrat)   throw(GradeTooLowException) {
    if (bureaucrat.getGrade() < 1)
        throw GradeTooHighException();
    else if (this->getGradeToSign() < bureaucrat.getGrade() || bureaucrat.getGrade() >150)
        throw GradeTooLowException();
    else
       Form::setSigned(true);
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target):
Form("ShrubberyCreationForm", 145, 137),target(_target) {

    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) {
    *this = src;
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(
        const ShrubberyCreationForm &rhs) {
    this->setTarget(rhs.getTarget());
    Form::operator=(rhs);
    return *this;
}

const std::string &ShrubberyCreationForm::getTarget() const {
    return target;
}

void ShrubberyCreationForm::setTarget(const std::string &target) {
    ShrubberyCreationForm::target = target;
}

