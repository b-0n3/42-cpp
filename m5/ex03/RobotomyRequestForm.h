//
// Created by Abdelouahad Ait hamd on 3/31/22.
//

#ifndef CPP_ROBOTOMYREQUESTFORM_H
#define CPP_ROBOTOMYREQUESTFORM_H
#include "Form.h"

class RobotomyRequestForm : virtual public Form {
private:
    std::string target;
public:
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm const &src);
    RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
    ~RobotomyRequestForm();
    void execute(const Bureaucrat &executor)const  throw(FileCreationException , FormNotSignedException,
            GradeTooHighException, GradeTooLowException);
    void beSigned(const Bureaucrat &bureaucrat)  throw(GradeTooLowException);

    const std::string &getTarget() const;

    void setTarget(const std::string &target);
};


#endif //CPP_ROBOTOMYREQUESTFORM_H
