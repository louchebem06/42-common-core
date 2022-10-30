/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 07:37:59 by bledda            #+#    #+#             */
/*   Updated: 2021/09/19 08:45:18 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <exception>
#include <string>

Intern::Intern()
{
	return ;
}

Intern::~Intern()
{
	return ;
}

Intern::Intern(Intern const & src)
{
	*this = src;
	return ;
}

Intern & Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return (*this);
}

Form *Intern::makeForm(std::string const & typeForm, std::string const & target) const
{
	std::string formList[3] = {"presidential pardon",
								"robotomy request",
								"shrubbery creation"};

	for (int i =0; i < 3; i++)
		if (!formList[i].compare(typeForm))
		{
			std::cout << "Intern creates " << target << std::endl;
			switch (i)
			{
				case 0: return (new PresidentialPardonForm(target));
				case 1: return (new RobotomyRequestForm(target));
				case 2: return (new ShrubberyCreationForm(target));
			}
		}
	throw Intern::InternException();
	return (NULL);
}

const char* Intern::InternException::what() const throw()
{
	return ("Form is not found");
}
