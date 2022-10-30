/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:11:04 by bledda            #+#    #+#             */
/*   Updated: 2021/09/10 19:42:23 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal called" << std::endl;
	return ;
}

Animal::Animal(Animal const & src)
{
	*this = src;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Animal destroy" << std::endl;
	return ;
}

Animal &	Animal::operator=(Animal const & rhs)
{
	if (this != &rhs)
	 	this->_type		= rhs._type;
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "" << std::endl;
	return ;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}
