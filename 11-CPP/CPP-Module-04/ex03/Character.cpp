/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:17:28 by bledda            #+#    #+#             */
/*   Updated: 2021/09/13 20:09:01 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Character.hpp"

Character::Character(void)
{
	for(int i = 0; i < 4; i++)
		this->_equipment[i] = NULL;
	this->_name = "Unknown";
	return ;
}

Character::Character(std::string const & name)
{
	for(int i = 0; i < 4; i++)
		this->_equipment[i] = NULL;
	this->_name = name;
	return ;
}

Character::Character(Character const & src)
{
	for(int i = 0; i < 4; i++)
		this->_equipment[i] = NULL;
	*this = src;
	return ;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (this->_equipment[i])
			delete this->_equipment[i];
	return ;
}

Character& Character::operator=(const Character& rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
			if (this->_equipment[i])
				delete this->_equipment[i];
		for (int i = 0; i < 4; i++)
			if (rhs._equipment[i])
				this->_equipment[i] = rhs._equipment[i]->clone();
		this->_name = rhs._name;
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
		if (!this->_equipment[i])
		{
			this->_equipment[i] = m;
			break ;
		}
	return ;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		this->_equipment[idx] = NULL;
	return ;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->_equipment[idx] != NULL)
	{
		std::cout << this->_name;
		this->_equipment[idx]->use(target);
	}
	return ;
}
