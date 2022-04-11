/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:46:19 by aait-ham          #+#    #+#             */
/*   Updated: 2022/03/29 18:46:21 by aait-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CPP00_CONTACT_H
#define CPP00_CONTACT_H

#include <iostream>
#include <iomanip>

class Contact {
public:
    int         id;
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;
    ~Contact();
    Contact();
    void print() const;


};
std::ostream &operator<<(std::ostream &os, const Contact &contact);
#endif //CPP00_CONTACT_H
