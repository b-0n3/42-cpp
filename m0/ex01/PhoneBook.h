/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:47:18 by aait-ham          #+#    #+#             */
/*   Updated: 2022/03/29 18:47:19 by aait-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CPP00_PHONEBOOK_H
#define CPP00_PHONEBOOK_H
#include "Contact.h"

class PhoneBook {
private:
    Contact _contacts[8];
    int _index;
public:
    PhoneBook();
    ~PhoneBook();
    void search();
    void lookForContact();
    void loop();
    void add();

};


#endif //CPP00_PHONEBOOK_H
