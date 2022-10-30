/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:29:24 by bledda            #+#    #+#             */
/*   Updated: 2021/09/10 19:46:59 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(void)
{
	this->_type  = "Cat";
	this->_brain = new Brain();
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
	delete this->_brain;
	return ;
}

Cat &	Cat::operator=(Cat const & rhs)
{
	if (this != &rhs)
	{
		this->_type 	= rhs._type;
		this->_brain 	= new Brain();		
		for (int i = 0; i < 100; i++)
			this->_brain->ideas[i]	= rhs._brain->ideas[i];
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaouuu!!" << std::endl;
	return ;
}

Brain*	Cat::getBrain(void) const
{
	return (this->_brain);
}

