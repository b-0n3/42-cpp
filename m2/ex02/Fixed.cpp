/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 16:40:32 by aait-ham          #+#    #+#             */
/*   Updated: 2022/04/03 16:40:34 by aait-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.h"
Fixed::Fixed() {
    PRINT("Default constructor called")
    this->rawBits = 0;
}

Fixed::Fixed(const Fixed  &copy) {
    PRINT("Copy constructor called");
    *this = copy;
}

Fixed::~Fixed() {
    PRINT("Destructor called")
}

Fixed& Fixed::operator=(Fixed const &copy) {
    PRINT("Copy assignment operator called")
    if (this != &copy)
        this->rawBits = copy.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const {
    PRINT("getRawBits member function called")
    return rawBits;
}

void Fixed::setRawBits(const int raw) {
    PRINT("setRawBits member function called")
    this->rawBits =raw;
}

Fixed::Fixed(const int value) {
    PRINT("Int constructor called")
    this->rawBits = (value << Fixed::fractionalBits);
}

Fixed::Fixed(const float value) {
    PRINT("Float constructor called");
    this->rawBits =((int) std::roundf(value * (1 << Fixed::fractionalBits)));
}

float Fixed::toFloat() const {

    return (float) this->rawBits / (float)(1 << Fixed::fractionalBits);
}

 int Fixed::toInt() const {
    PRINT("toInt member function called")
    return this->rawBits >> fractionalBits;
}

bool Fixed::operator<(Fixed const &a) const
{
    return this->getRawBits() < a.getRawBits();
}

bool Fixed::operator<=(Fixed const &a) const
{
    return this->getRawBits() <= a.getRawBits();
}

bool Fixed::operator>(Fixed const &a) const
{
    return this->getRawBits() > a.getRawBits();
}

bool Fixed::operator>=(Fixed const &a) const
{
    return this->getRawBits() >= a.getRawBits();
}
bool Fixed::operator==(Fixed const &a) const
{
   return  this->getRawBits() == a.getRawBits();
}
bool  Fixed::operator!=(Fixed const &a) const
{
    return this->getRawBits() != a.getRawBits();
}
Fixed Fixed::operator--() {
    this->rawBits--;
    return *this;
}

Fixed Fixed::operator++() {

    this->rawBits++;
    return *this;
}
Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    this->rawBits++;
    return tmp;
}

Fixed Fixed::operator--(int)
{
  Fixed tmp(*this);
    this->rawBits--;
    return tmp;
}

Fixed Fixed::operator+(Fixed const &a) const
{
    return  Fixed(this->toFloat() + a.toFloat());
}
Fixed Fixed::operator-(Fixed const &a) const
{
    return Fixed(this->toFloat() - a.toFloat());
}
Fixed Fixed::operator*(Fixed const &a)
{

    return Fixed(this->toFloat() * a.toFloat());
}
Fixed Fixed::operator/(Fixed const &a)const
{
    if (a.getRawBits()!= 0)
        return Fixed(this->getRawBits() / a.getRawBits());
    return Fixed(this->getRawBits());
}

Fixed& Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a > b)
        return(Fixed &) b;
    return (Fixed &)a;
}
Fixed& Fixed::min(Fixed  &a, Fixed  &b)
{
    if (a > b)
        return b;
    return a;
}
Fixed& Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a > b)
        return(Fixed &) a;
    return (Fixed &)b;
}
Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return  a;
    return b;
}

std::ostream &operator<<(std::ostream &os, Fixed const& f)
{

    os << f.toFloat();
    return os;
}
