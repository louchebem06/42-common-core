/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 19:38:30 by bledda            #+#    #+#             */
/*   Updated: 2021/09/13 20:11:27 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for(int i = 0; i < 4; i++)
		this->_source[i] = NULL;
	return ;
}

MateriaSource::MateriaSource(const MateriaSource& src)
{
	for(int i = 0; i < 4; i++)
		this->_source[i] = NULL;
	*this = src;
	return ;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		if (this->_source[i])
			delete this->_source[i];
	return ;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
			if (this->_source[i])
				delete this->_source[i];
		for (int i = 0; i < 4; i++)
			if (rhs._source[i])
				this->_source[i] = rhs._source[i]->clone();
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
		if (!this->_source[i])
		{
			this->_source[i] = m->clone();
			break ;
		}
	return ;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
		if (this->_source[i]->getType() == type)
			return this->_source[i]->clone();
	return (NULL);
}
