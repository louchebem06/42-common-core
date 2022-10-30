/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 08:10:52 by bledda            #+#    #+#             */
/*   Updated: 2021/09/08 13:13:24 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap(void)
{
	this->_name 		= "default";
	this->_hitPoints	= 100;
	this->_energyPoints	= 50;
	this->_attackDamage	= 20;
	this->_gateKeeperMode = false;
	std::cout << this->_name << " ScavTrap has been created" << std::endl;
	return ;
}


ScavTrap::ScavTrap(std::string name)
{
	this->_name 			= name;
	this->_hitPoints	= 100;
	this->_energyPoints	= 50;
	this->_attackDamage	= 20;
	this->_gateKeeperMode = false;
	std::cout << "ScavTrap " << this->_name << " has been created" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	*this = src;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " <<  this->_name << " was destroyed" << std::endl;
	return ;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & rhs)
{
	if (this != &rhs)
	{
	 	this->_name				= rhs._name;
		this->_hitPoints		= rhs._hitPoints;
		this->_energyPoints		= rhs._energyPoints;
		this->_attackDamage		= rhs._attackDamage;
		this->_gateKeeperMode	= rhs._gateKeeperMode;
	}
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	this->_gateKeeperMode = true;

	std::cout << "ScavTrap " << this->_name;
	std::cout << " enterred in Gate keeper mode";
	std::cout << std::endl;
}
