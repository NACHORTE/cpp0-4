/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <iortega-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:04:27 by iortega-          #+#    #+#             */
/*   Updated: 2023/10/22 17:43:15 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixedPointValue = 0;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = n << this->_fractionalBits;
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointValue = roundf(n * (1 << this->_fractionalBits));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator = (const Fixed &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedPointValue = rhs.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPointValue = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->_fixedPointValue / (float)(1 << this->_fractionalBits));
}

int Fixed::toInt(void) const
{
	return (this->_fixedPointValue >> this->_fractionalBits);
}

std::ostream & operator << (std::ostream &o, const Fixed &rhs)
{
	o << rhs.toFloat();
	return (o);
}

bool Fixed::operator > (const Fixed &rhs) const
{
	return (this->_fixedPointValue > rhs.getRawBits());
}

bool Fixed::operator < (const Fixed &rhs) const
{
	return (this->_fixedPointValue < rhs.getRawBits());
}

bool Fixed::operator >= (const Fixed &rhs) const
{
	return (this->_fixedPointValue >= rhs.getRawBits());
}

bool Fixed::operator <= (const Fixed &rhs) const
{
	return (this->_fixedPointValue <= rhs.getRawBits());
}

bool Fixed::operator == (const Fixed &rhs) const
{
	return (this->_fixedPointValue == rhs.getRawBits());
}

bool Fixed::operator != (const Fixed &rhs) const
{
	return (this->_fixedPointValue != rhs.getRawBits());
}

Fixed Fixed::operator + (const Fixed &rhs) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator - (const Fixed &rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator * (const Fixed &rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator / (const Fixed &rhs) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed & Fixed::operator ++ (void)
{
	this->_fixedPointValue++;
	return (*this);
}

Fixed Fixed::operator ++ (int)
{
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed & Fixed::operator -- (void)
{
	this->_fixedPointValue--;
	return (*this);
}

Fixed Fixed::operator -- (int)
{
	Fixed tmp(*this);
	operator--();
	return (tmp);
}

Fixed & Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed & Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed & Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed & Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}
