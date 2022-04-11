/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:33:56 by aait-ham          #+#    #+#             */
/*   Updated: 2022/04/01 15:33:57 by aait-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
int main()
{
    Harl harl;
    harl.complain("debug");
    harl.complain("error");
    harl.complain("warning");
    harl.complain("info");
    harl.complain("critical");
}
