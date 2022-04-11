/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 14:52:11 by aait-ham          #+#    #+#             */
/*   Updated: 2022/04/01 14:52:12 by aait-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CPP_WEAPON_HPP
#define CPP_WEAPON_HPP
#include <iostream>

class Weapon {
private:
    std::string type;
public:
    Weapon();
    Weapon(std::string const &type);
    ~Weapon();
    const std::string &getType();
    void        setType(std::string type);
};


#endif
