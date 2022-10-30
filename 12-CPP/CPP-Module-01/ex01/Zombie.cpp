/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 15:46:57 by bledda            #+#    #+#             */
/*   Updated: 2021/08/27 10:42:09 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->getName() << " Died" << std::endl;
	return ;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
	return;
}

std::string Zombie::getName(void) const
{
	return (this->_name);
}

void Zombie::announce(void) const
{
	std::cout << this->getName() << " BraiiiiiiinnnzzzzZ..." << std::endl;
	return ;
}
