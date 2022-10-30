/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 11:25:43 by bledda            #+#    #+#             */
/*   Updated: 2021/08/27 15:08:14 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &type) : _weaponREF(type)
{
	this->_name = name;
	return ;
}

HumanA::~HumanA(void)
{
	return ;
}


void HumanA::attack(void)
{
	std::cout << this->_name << " attack : " << this->_weaponREF.getType() << std::endl;
	return ;
}
