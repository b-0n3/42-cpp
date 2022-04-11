/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 14:30:59 by aait-ham          #+#    #+#             */
/*   Updated: 2022/04/01 14:31:01 by aait-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.h"

int main()
{
    Zombie zombie("b-0n3");
    zombie.announce();

    Zombie *ptr = newZombie("hell.js");

    ptr->announce();
    delete ptr;
    randomChump("mess.css");
}
