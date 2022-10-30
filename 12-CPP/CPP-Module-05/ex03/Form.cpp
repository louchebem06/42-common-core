/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 23:39:39 by bledda            #+#    #+#             */
/*   Updated: 2021/09/18 11:28:13 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string const name, int const gradeSign, int const gradeExec):
			_name(name), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	this->_signed = false;
	if (gradeSign < 1 || gradeExec < 1)
		throw Form::GradeTooHighException();
	else if (gradeSign > 150 || gradeExec > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::Form(Form const & src)
{
	*this = src;
	return ;
}

Form::~Form(void)
{
	return ;
}

Form & Form::operator=(Form const & rhs)
{
	if (this != &rhs)
	{
		this->_name 		= rhs.getName();
		this->_gradeSign 	= rhs.getGradeSign();
		this->_gradeExec 	= rhs.getGradeExec();
		this->_signed 		= rhs.getSigned();
	}
	return (*this);
}

const char * Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char * Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

const char * Form::NotSigned::what() const throw()
{
	return ("Form is not signed");
}

std::string	Form::getName(void) const
{
	return (this->_name);
}

bool Form::getSigned(void) const
{
	return (this->_signed);
}

int	Form::getGradeSign(void) const
{
	return (this->_gradeSign);
}

int	Form::getGradeExec(void) const
{
	return (this->_gradeExec);
}

std::ostream & operator<<(std::ostream & o, Form const & i)
{
	o << i.getName();
	o << ", form state ";
	if (i.getSigned())
		o << "signed";
	else
		o << "not signed";
	return (o);
}

void	Form::beSigned(Bureaucrat const & b)
{
	if (this->getGradeSign() >= b.getGrade())
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
	return ;
}
