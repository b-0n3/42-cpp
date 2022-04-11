/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 14:35:09 by aait-ham          #+#    #+#             */
/*   Updated: 2022/04/01 14:35:10 by aait-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie {
private:
    std::string name;
public:
    Zombie(std::string name);
    Zombie();
    void setName(std::string name);
    ~Zombie();
    void announce(void);
};
Zombie* zombieHorde(int N, std::string name);
#endif
