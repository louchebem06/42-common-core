/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 19:35:33 by bledda            #+#    #+#             */
/*   Updated: 2021/09/13 20:09:46 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Cure.hpp"

Cure::Cure(void)
{
	this->_type = "cure";
	return ;
}

Cure::Cure(std::string const & type)
{
	this->_type = type;
	return ;
}

Cure::~Cure(void)
{
	return ;
}

Cure::Cure(Cure const & src)
{
	*this = src;
	return ;
}

Cure& Cure::operator=(const Cure& rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}


AMateria* Cure::clone(void) const
{
	AMateria *clone = new Cure(this->_type);
	return (clone);
}

void Cure::use(ICharacter& target)
{
	std::cout << " heals " << target.getName() << " wounds" << std::endl;
	return ;
}
