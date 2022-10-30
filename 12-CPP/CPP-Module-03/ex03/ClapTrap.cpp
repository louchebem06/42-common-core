/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 16:52:20 by bledda            #+#    #+#             */
/*   Updated: 2021/09/08 13:02:46 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap(void) 
{
	this->_name			= "Default";
	this->_hitPoints	= 10;
	this->_energyPoints	= 10;
	this->_attackDamage	= 0;
	std::cout << this->_name << " ClapTrap called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) 
{
	this->_name			= name;
	this->_hitPoints	= 10;
	this->_energyPoints	= 10;
	this->_attackDamage	= 0;
	std::cout << "ClapTrap " << this->_name << " has been created" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->_name << " was destroyed" << std::endl;
	return ;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & rhs)
{
	if (this != &rhs)
	{
	 	this->_name			= rhs._name;
		this->_hitPoints	= rhs._hitPoints;
		this->_energyPoints	= rhs._energyPoints;
		this->_attackDamage	= rhs._attackDamage;
	}
	return (*this);
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->_name;
	std::cout << " attack " << target;
	std::cout << ", causing " << this->_attackDamage;
	std::cout << " points of damage!" << std::endl;
	return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount;

	std::cout << "ClapTrap " << this->_name;
	std::cout << " take damage " << amount;
	std::cout << ", remaining hit points " << this->_hitPoints;
	std::cout << std::endl;
	return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints += amount;

	std::cout << "ClapTrap " << this->_name;
	std::cout << " be repaired " << amount;
	std::cout << ", remaining hit points " << this->_hitPoints;
	std::cout << std::endl;
	return ;
}
