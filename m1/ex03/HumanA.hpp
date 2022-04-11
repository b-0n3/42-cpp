/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 14:51:35 by aait-ham          #+#    #+#             */
/*   Updated: 2022/04/01 14:51:37 by aait-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CPP_HUMANA_HPP
#define CPP_HUMANA_HPP
#include "Weapon.hpp"

class HumanA {
private:
    Weapon weapon;
    std::string name;
public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void attack();

};


#endif //CPP_HUMANA_HPP
