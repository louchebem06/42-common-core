/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 11:18:28 by bledda            #+#    #+#             */
/*   Updated: 2021/09/06 16:15:27 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int Fixed::_bits = 8;

Fixed::Fixed(void) : _fixe(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_fixe = rhs.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixe);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixe = raw;
	return ;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixe = (roundf(f * (1 << this->_bits)));
	return ;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_fixe / (float)(1 << this->_bits));
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixe = (i << this->_bits);
	return ;
}

int		Fixed::toInt(void) const
{
	return (this->_fixe >> this->_bits);
}

std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return (o);
}

bool	Fixed::operator>(Fixed const & rhs)
{
	if (this->_fixe > rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const & rhs)
{
	if (this->_fixe < rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const & rhs)
{
	if (this->_fixe >= rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const & rhs)
{
	if (this->_fixe <= rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed const & rhs)
{
	if (this->_fixe == rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const & rhs)
{
	if (this->_fixe != rhs.getRawBits())
		return (true);
	return (false);
}

Fixed	Fixed::operator+(Fixed const & rhs)
{
	Fixed tmp(*this);

	tmp.setRawBits(this->getRawBits() + rhs.getRawBits());
	return (tmp);
}

Fixed	Fixed::operator-(Fixed const & rhs)
{
	Fixed tmp(*this);

	tmp.setRawBits(this->getRawBits() - rhs.getRawBits());
	return (tmp);
}

Fixed	Fixed::operator*(Fixed const & rhs)
{
	Fixed tmp(*this);

	tmp.setRawBits((this->getRawBits() * rhs.getRawBits()) / (1 << this->_bits));
	return (tmp);
}

Fixed	Fixed::operator/(Fixed const & rhs)
{
	Fixed tmp(*this);

	tmp.setRawBits((this->getRawBits() * (1 << this->_bits)) / rhs.getRawBits());
	return (tmp);
}

Fixed & Fixed::operator++()
{
	this->_fixe++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	++*this;
	return (tmp);
}

Fixed & Fixed::operator--()
{
	this->_fixe--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	--*this;
	return (tmp);
}

Fixed const & Fixed::min(Fixed const & a, Fixed const & b)
{
	if (a.toFloat() < b.toFloat())
		return (a);
	return (b);
}

Fixed const & Fixed::max(Fixed const & a, Fixed const & b)
{
	if (a.toFloat() < b.toFloat())
		return (b);
	return (a);
}

Fixed const & min(Fixed const & a, Fixed const & b)
{
	return (Fixed::min(a, b));
}

Fixed const & max(Fixed const & a, Fixed const & b)
{
	return (Fixed::max(a, b));
}

Fixed & Fixed::min(Fixed & a, Fixed & b)
{
	if (a.toFloat() < b.toFloat())
		return (a);
	return (b);
}

Fixed & Fixed::max(Fixed & a, Fixed & b)
{
	if (a.toFloat() < b.toFloat())
		return (b);
	return (a);
}

Fixed & min(Fixed & a, Fixed & b)
{
	return (Fixed::min(a, b));
}

Fixed & max(Fixed & a, Fixed & b)
{
	return (Fixed::max(a, b));
}
