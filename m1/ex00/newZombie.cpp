/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 14:31:06 by aait-ham          #+#    #+#             */
/*   Updated: 2022/04/01 14:31:07 by aait-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.h"

Zombie* newZombie(std::string name)
{
    Zombie *zombie = new Zombie(name);
    return zombie;
}
