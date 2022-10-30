/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:29:24 by bledda            #+#    #+#             */
/*   Updated: 2021/09/10 19:40:03 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Cat.hpp"

Cat::Cat(void)
{
	this->_type  = "Cat";
	std::cout << "Cat called" << std::endl;
}

Cat::Cat(Cat const & src)
{
	*this = src;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat destroy" << std::endl;
	return ;
}

Cat &	Cat::operator=(Cat const & rhs)
{
	if (this != &rhs)
		this->_type 	= rhs._type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaouuu!!" << std::endl;
	return ;
}
