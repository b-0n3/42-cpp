/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:33:29 by aait-ham          #+#    #+#             */
/*   Updated: 2022/04/01 15:33:36 by aait-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

void Harl::debug() {
    std::cout << "I love having extra bacon "
                 "for my "
                 "7XL-double-cheese-triple-pickle-specialketchup burger."
                 " I really do!" <<std::endl;
}

void Harl::info() {
    std::cout<<"I cannot believe adding extra bacon costs more money. You didn’t put"
               "enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl;
}

void Harl::warning() {
    std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for\n"
               "years whereas you started working here since last month."<<std::endl;
}

void Harl::error() {
    std::cout<< "This is unacceptable! I want to speak to the manager now. "<< std::endl;
}

Harl::Harl(){
    std::cout <<"harl created"<<std::endl;
}

Harl::~Harl() {
    std::cout <<"harl destroyed"<<std::endl;
}

void Harl::complain(std::string level) {
   func  a[4] = {
           &Harl::debug,
           &Harl::info,
           &Harl::warning,
           &Harl::error
   };
   std::string b[4] = {"debug", "info", "warning", "error"};
   for (int i = 0; i < 4; i++) {
       if (level == b[i]) {
           (this->*a[i])();
       }
   }
}
