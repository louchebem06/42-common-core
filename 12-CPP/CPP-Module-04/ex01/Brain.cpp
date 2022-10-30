/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 16:14:44 by bledda            #+#    #+#             */
/*   Updated: 2021/09/10 19:14:53 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain called" << std::endl;
}

Brain::Brain(Brain const & src)
{
	*this = src;
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Brain destroy" << std::endl;
	return ;
}

Brain &	Brain::operator=(Brain const & rhs)
{
	if (this != &rhs)
		for (int i = 0; i < 100; i++)
			this->ideas[i]	= rhs.ideas[i];
	return (*this);
}

void	Brain::setIdeas(std::string const ideas, int const i)
{
	if (i >= 100)
		return ;
	this->ideas[i] = ideas;
	return ;
}

void	Brain::viewIdeas(void)
{
	for (int i = 0; i < 100; i++)
		if (!this->ideas[i].empty())
			std::cout << this->ideas[i] << std::endl;
	return ;
}
