/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:29:24 by bledda            #+#    #+#             */
/*   Updated: 2021/09/10 19:39:57 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Dog.hpp"

Dog::Dog(void)
{
	this->_type  = "Dog";
	std::cout << "Dog called" << std::endl;
}

Dog::Dog(Dog const & src)
{
	*this = src;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Dog destroy" << std::endl;
	return ;
}

Dog &	Dog::operator=(Dog const & rhs)
{
	if (this != &rhs)
		this->_type 	= rhs._type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Wouaff!" << std::endl;
	return ;
}
