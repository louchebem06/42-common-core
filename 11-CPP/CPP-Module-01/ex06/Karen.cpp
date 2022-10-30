/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 04:45:37 by bledda            #+#    #+#             */
/*   Updated: 2021/08/31 08:30:43 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Karen.hpp"

Karen::Karen(void)
{
	return ;
}

Karen::~Karen(void)
{
	return ;
}

void Karen::complain(std::string level)
{
	enum val_level {DEBUG,INFO,WARNING,ERROR};

	int choix = \
		(level == "DEBUG") ? DEBUG : \
		(level == "INFO") ? INFO : \
		(level == "WARNING") ? WARNING : \
		(level == "ERROR") ? ERROR : -1;

	switch (choix)
	{
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;	break;
		case DEBUG:		this->_debug();
		case INFO:		this->_info();
		case WARNING:	this->_warning();
		case ERROR: 	this->_error();
	}
 	return ;
}

void Karen::_debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-\
pickle-special ketchup burger. I just love it!" << std::endl;
	std::cout << std::endl;
	return ;
}

void Karen::_info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You \
don’t put enough! If you did I would not have to ask for it!" << std::endl;
	std::cout << std::endl;
	return ;
}

void Karen::_warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been \
coming here for years and you just started working here last month." << std::endl;
	std::cout << std::endl;
	return ;
}

void Karen::_error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
	return ;
}
