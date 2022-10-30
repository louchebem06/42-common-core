/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:29:24 by bledda            #+#    #+#             */
/*   Updated: 2021/09/10 19:47:21 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void)
{
	this->_type  = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog called" << std::endl;
}

Dog::Dog(Dog const & src)
{
	*this = src;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Dog destroy" << std::endl;
	delete this->_brain;
	return ;
}

Dog &	Dog::operator=(Dog const & rhs)
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

void	Dog::makeSound(void) const
{
	std::cout << "Wouaff!" << std::endl;
	return ;
}

Brain*	Dog::getBrain(void) const
{
	return (this->_brain);
}
