/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 10:29:35 by bledda            #+#    #+#             */
/*   Updated: 2021/09/18 12:41:12 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(std::string const name): Form("RobotomyRequestForm", 72, 45)
{
	this->_target = name;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src): Form("RobotomyRequestForm", 72, 45)
{
	*this = src;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	if (this != &rhs)
		this->_target = rhs._target;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSigned())
		throw Form::NotSigned();
	else if (this->getGradeSign() < executor.getGrade())
		throw Form::GradeTooLowException();
	else
	{
		std::srand(std::time(0));
		for (int i = 0; i < 5;i++)
			if (i % 2)
				std::cout << "Bouze" << std::endl;
			else
				std::cout << "Booouzzze!!" << std::endl;
		if (rand() % 2)
			std::cout << this->_target << " has been robotomized" << std::endl;
		else
			std::cout << "The robotomize of " << this->_target << " failed" << std::endl;
	}
	return ;
}
