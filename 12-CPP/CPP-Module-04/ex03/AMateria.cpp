/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 19:30:39 by bledda            #+#    #+#             */
/*   Updated: 2021/09/13 20:08:38 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "AMateria.hpp"

AMateria::AMateria(void)
{
	return ;
}

AMateria::AMateria(std::string const & type)
{
	this->_type = type;
	return ;
}

AMateria::AMateria(const AMateria& src)
{
	*this = src;
	return ;
}

AMateria::~AMateria()
{
	return ;
}

AMateria& AMateria::operator=(const AMateria& rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter&)
{
	return ;
}
