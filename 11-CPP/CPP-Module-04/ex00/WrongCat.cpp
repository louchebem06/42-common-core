/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:29:24 by bledda            #+#    #+#             */
/*   Updated: 2021/09/10 19:42:55 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->_type  = "WrongCat";
	std::cout << "WrongCat called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & src)
{
	*this = src;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destroy" << std::endl;
	return ;
}

WrongCat &	WrongCat::operator=(WrongCat const & rhs)
{
	if (this != &rhs)
		this->_type 	= rhs._type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Wrong Miaouuui!" << std::endl;
	return ;
}