/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:33:47 by aait-ham          #+#    #+#             */
/*   Updated: 2022/04/01 15:33:48 by aait-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INC_42_CPP_KAREN_HPP
#define INC_42_CPP_KAREN_HPP
#include <iostream>
class Harl {
private:
    typedef void (Harl::*func)();
    void debug();
    void info();
    void warning();
    void error();
public:
    Harl();
    ~Harl();
    void complain(std::string level);
};


#endif //INC_42_CPP_KAREN_HPP
