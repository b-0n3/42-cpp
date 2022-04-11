/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 14:51:45 by aait-ham          #+#    #+#             */
/*   Updated: 2022/04/01 14:51:46 by aait-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

HumanB::HumanB(std::string name){
    this->name = name;
}

HumanB::~HumanB() {
    std::cout << "HumanB destructor called" << std::endl;
}

void HumanB::attack() {
    if (&this->weapon == nullptr)
        return;
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

void HumanB::setWeapon(Weapon &w) {
    this->weapon = w;
}
