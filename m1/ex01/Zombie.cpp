/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 14:34:21 by aait-ham          #+#    #+#             */
/*   Updated: 2022/04/01 14:34:24 by aait-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.h"

Zombie::~Zombie() {
    std::cout << this->name << " is dead , destructor has been called " << std::endl;
}

void Zombie::announce(void) {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::Zombie(){
    std::cout << "Zombie created" << std::endl;
}
Zombie::Zombie(std::string name) {
    this->name = name;
}

void Zombie::setName(std::string name) {
    this->name = name ;
}
