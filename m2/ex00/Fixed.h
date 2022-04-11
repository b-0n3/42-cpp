/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 16:35:48 by aait-ham          #+#    #+#             */
/*   Updated: 2022/04/03 16:35:50 by aait-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_FIXED_H
#define CPP_FIXED_H
#include <iostream>
#define  PRINT(x)  std::cout << x<< std::endl;

class Fixed {
private:
    int rawBits;
    static const int fractionalBits = 8;
public:
    Fixed();
    Fixed(Fixed const  &copy);
    ~Fixed();
    Fixed& operator=(Fixed const  &copy);
    int getRawBits() const;
    void setRawBits(int raw);


};




#endif
