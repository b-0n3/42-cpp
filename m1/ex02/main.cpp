/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 14:36:48 by aait-ham          #+#    #+#             */
/*   Updated: 2022/04/01 14:36:49 by aait-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string   string =  "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;
    std::cout<<"string address: " << &string << std::endl;
    std::cout<<"stringPTR address: " << stringPTR << std::endl;
    std::cout<<"stringREF address: " << &stringREF << std::endl;

    std::cout<<"the string using stringPTR is : " << *stringPTR << std::endl;
    std::cout<<"the string using stringREF us : " << stringREF << std::endl;

}
