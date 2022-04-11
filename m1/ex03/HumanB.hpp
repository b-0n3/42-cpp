/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 14:51:52 by aait-ham          #+#    #+#             */
/*   Updated: 2022/04/01 14:51:53 by aait-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef CPP_HUMANB_HPP
#define CPP_HUMANB_HPP
#include "Weapon.hpp"

class HumanB {
private:
    Weapon weapon;
    std::string name;
public:
    HumanB(std::string name);
    ~HumanB();
    void attack();
    void setWeapon(Weapon &w);
};



#endif //CPP_HUMANB_HPP
