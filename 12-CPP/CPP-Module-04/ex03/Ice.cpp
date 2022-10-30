/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 19:36:35 by bledda            #+#    #+#             */
/*   Updated: 2021/09/13 20:10:49 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Ice.hpp"

Ice::Ice(void)
{
	this->_type = "ice";
	return ;
}

Ice::Ice(std::string const & type)
{
	this->_type = type;
	return ;
}

Ice::~Ice(void)
{
	return ;
}

Ice::Ice(Ice const & src)
{
	*this = src;
	return ;
}

Ice& Ice::operator=(const Ice& rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

AMateria* Ice::clone(void) const
{
	AMateria *clone = new Ice(this->_type);
	return (clone);
}

void Ice::use(ICharacter& target)
{
	std::cout << " shoots an ice bolt at " << target.getName() << std::endl;
	return ;
}
