/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 10:29:40 by bledda            #+#    #+#             */
/*   Updated: 2021/09/18 12:21:24 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const name): Form("PresidentialPardonForm", 25, 5)
{
	this->_target = name;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src): Form("PresidentialPardonForm", 25, 5)
{
	*this = src;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return ;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	if (this != &rhs)
		this->_target = rhs._target;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSigned())
		throw Form::NotSigned();
	else if (this->getGradeSign() < executor.getGrade())
		throw Form::GradeTooLowException();
	else
		std::cout << this->_target << " was forgiven by Zaphod Beeblebrox." << std::endl;
	return ;
}
