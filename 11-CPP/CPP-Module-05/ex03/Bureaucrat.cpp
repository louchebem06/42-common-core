/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 00:59:22 by bledda            #+#    #+#             */
/*   Updated: 2021/09/18 11:06:15 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(int const grade, std::string const name)
{
	this->_name = name;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	*this = src;
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_grade = rhs.getGrade();
	}
	return (*this);
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

std::string Bureaucrat::getName(void) const
{
	return (this->_name);
}

void Bureaucrat::upGrade(void)
{
	this->_grade--;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	return ;
}

void Bureaucrat::downGrade(void)
{
	this->_grade++;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return ;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & i)
{
	o << i.getName();
	o << ", bureaucrat grade ";
	o << i.getGrade();
	return (o);
}

void	Bureaucrat::signForm(Form const & f)
{
	std::cout << this->getName();
	if (f.getGradeSign() >= this->getGrade())
	{
		std::cout << " signs ";
		std::cout << f.getName();
	}
	else
	{
		std::cout << " cannot sign ";
		std::cout << f.getName();
		std::cout << " because grade is trop low";
	}
	std::cout << std::endl;
	return ;
}

void	Bureaucrat::executeForm(Form const & form)
{
	std::cout << this->getName();
	if (!form.getSigned())
	{
		std::cout << " form ";
		std::cout << form.getName();
		std::cout << " is not signed";
	}
	else if (form.getGradeSign() >= this->getGrade())
	{
		std::cout << " exec ";
		std::cout << form.getName();
	}
	else
	{
		std::cout << " cannot exec ";
		std::cout << form.getName();
		std::cout << " because grade is trop low";
	}
	std::cout << std::endl;
	return ;
}
