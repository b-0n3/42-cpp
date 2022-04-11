/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:46:38 by aait-ham          #+#    #+#             */
/*   Updated: 2022/03/29 18:46:40 by aait-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Contact.h"
Contact::Contact()
{
    this->id = -1;
}
Contact::~Contact(){};

std::ostream &operator<<(std::ostream &os, const Contact &contact) {
    os <<"{"<< std::endl
    << "'id': '" << contact.id << "'"<< std::endl
    <<"'firstName' : '" << contact.firstName << "'"<< std::endl
    <<"'lastName': '" << contact.lastName<< "'"<< std::endl
    <<"'nickName' : '" << contact.nickName<< "'"<< std::endl
    <<"'phoneNumber': '" << contact.phoneNumber<< "'"<< std::endl
    <<"'darkestSecret': '"<< contact.darkestSecret <<"'"<< std::endl << "}" << std::endl;
    return os;
}

std::string toTableColumn(std::string str)
{
    if (str.length() < 10)
        return str;
    return  str.substr(0, 10).replace(9, 1, ".");
}

void Contact::print() const {
    std::cout <<  std::left<< std::setw(10) << id
              << " | "  <<  std::left << std::setw(10)<< toTableColumn(firstName)
            << " | "  <<  std::left<< std::setw(10)<< toTableColumn(lastName)
            << " | " <<  std::left<< std::setw(10)<< toTableColumn(nickName)   << std::endl;
}
