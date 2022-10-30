/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 08:10:52 by bledda            #+#    #+#             */
/*   Updated: 2021/09/08 13:10:44 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap(void)
{
	this->_name			= "Default";
	this->_hitPoints	= 100;
	this->_energyPoints	= 50;
	this->_attackDamage	= 20;
	std::cout << this->_name << " FragTrap has been created" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name)
{
	this->_name 		= name;
	this->_hitPoints	= 100;
	this->_energyPoints	= 50;
	this->_attackDamage	= 20;
	std::cout << "FragTrap " << this->_name << " has been created" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " <<  this->_name << " was destroyed" << std::endl;
	return ;
}

FragTrap &	FragTrap::operator=(FragTrap const & rhs)
{
	if (this != &rhs)
	{
	 	this->_name				= rhs._name;
		this->_hitPoints		= rhs._hitPoints;
		this->_energyPoints		= rhs._energyPoints;
		this->_attackDamage		= rhs._attackDamage;
	}
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name;
	std::cout << " Hey, high fives guys ?!";
	std::cout << std::endl;
}
