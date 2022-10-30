/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 10:29:30 by bledda            #+#    #+#             */
/*   Updated: 2021/09/18 12:06:22 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string const name): Form("ShrubberyCreationForm", 145, 137)
{
	this->_target = name;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src): Form("ShrubberyCreationForm", 145, 137)
{
	*this = src;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	if (this != &rhs)
		this->_target = rhs._target;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSigned())
		throw Form::NotSigned();
	else if (this->getGradeSign() < executor.getGrade())
		throw Form::GradeTooLowException();
	else
	{
		std::string content;
		
		content = "       _-_\n";
		content += "    /~~   ~~\\\n";
		content += " /~~         ~~\\\n";
		content += "{               }\n";
		content += " \\  _-     -_  /\n";
		content += "   ~  \\\\ //  ~\n";
		content += "_- -   | | _- _\n";
		content += "  _ -  | |   -_\n";
		content += "      // \\\\\n";

		std::ofstream ofs((this->_target + "__shrubbery").c_str());
		ofs << content;
		ofs.close();
	}
	return ;
}
