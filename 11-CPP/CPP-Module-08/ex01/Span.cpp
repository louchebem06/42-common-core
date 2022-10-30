/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 22:41:02 by bledda            #+#    #+#             */
/*   Updated: 2021/09/24 00:56:11 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <stdexcept>
#include <algorithm>

Span::Span(void): _N(0)
{
	return ;
}

Span::Span(unsigned int const N): _N(N)
{
	return ;
}

Span::~Span(void)
{
	return ;
}

Span::Span(Span const & src): _N(src._N)
{
	*this = src;
	return ;
}

Span & Span::operator=(Span const & rhs)
{
	if (this != &rhs)
		this->_tab = rhs._tab;
	return (*this);
}

void Span::addNumber(int const N)
{
	if (this->_tab.size() >= this->_N)
		throw Span::ExceptionFull();
	this->_tab.push_back(N);
	return ;
}

const char * Span::ExceptionFull::what() const throw()
{
	return ("Tab is full");
}

const char * Span::ExceptionShort::what() const throw()
{
	return ("Way too short");
}

int Span::shortestSpan(void)
{
	if (this->_tab.size() <= 2)
		throw Span::ExceptionShort();

	int diff = 0;

	std::sort(this->_tab.begin(), this->_tab.end());
	for (std::vector<int>::iterator it = this->_tab.begin();
			it + 1 != this->_tab.end(); it++)
	{
		int current = *it;
		int next 	= *it + 1;
		int small 	= current;
		int big 	= next;

		if (small > next)
		{
			big 	= current;
			small 	= next;
		}
		if (diff < (big - small))
			diff  = (big - small);
	}
	return (diff);
}

int Span::longestSpan(void)
{
	if (this->_tab.size() <= 2)
		throw Span::ExceptionShort();
	
	int min, max;

	min = *std::min_element(this->_tab.begin(), this->_tab.end());
	max = *std::max_element(this->_tab.begin(), this->_tab.end());
	return (max - min);
}
