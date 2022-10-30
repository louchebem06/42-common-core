/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 08:10:52 by bledda            #+#    #+#             */
/*   Updated: 2021/09/08 12:58:08 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>
#include <string>

DiamondTrap::DiamondTrap(void)
{
	this->_name				= "Default";
	this->ClapTrap::_name 	= this->_name;
	this->ClapTrap::_name 	+= "_clap_name";
	this->_hitPoints 		= FragTrap::_hitPoints;
	this->_energyPoints 	= ScavTrap::_energyPoints;
	this->_attackDamage 	= FragTrap::_attackDamage;
	this->_gateKeeperMode	= ScavTrap::_gateKeeperMode;
	std::cout << this->_name << " DiamondTrap called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->_name				= name;
	this->ClapTrap::_name 	= this->_name;
	this->ClapTrap::_name 	+= "_clap_name";
	this->_hitPoints 		= FragTrap::_hitPoints;
	this->_energyPoints 	= ScavTrap::_energyPoints;
	this->_attackDamage 	= FragTrap::_attackDamage;
	this->_gateKeeperMode	= ScavTrap::_gateKeeperMode;
	std::cout << "DiamondTrap " << this->_name << " has been created" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src)
{
	*this = src;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " <<  this->_name << " was destroyed" << std::endl;
	return ;
}

DiamondTrap &	DiamondTrap::operator=(DiamondTrap const & rhs)
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

void	DiamondTrap::whoAmI(void)
{
	std::cout << this->_name << std::endl;
	std::cout << ClapTrap::_name << std::endl;
}
