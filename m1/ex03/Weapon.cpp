/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 14:52:04 by aait-ham          #+#    #+#             */
/*   Updated: 2022/04/01 14:52:05 by aait-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"

Weapon::Weapon(std::string const &type) {
    this->setType(type);
}

Weapon::~Weapon() {
    std::cout<<"weapon destructor called"<< std::endl;
}

const std::string &Weapon::getType() {
    return this->type;
}

void Weapon::setType(std::string type) {
    this->type = type;

}

Weapon::Weapon() {
    std::cout<<"weapon constructor called"<< std::endl;
}
