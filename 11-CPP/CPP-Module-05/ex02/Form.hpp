/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 23:39:36 by bledda            #+#    #+#             */
/*   Updated: 2021/09/18 11:27:48 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(std::string const name, int const gradeSign, int const gradeExec);
		Form(Form const & src);
		virtual ~Form(void);

		Form & operator=(Form const & rhs);

		class GradeTooHighException: public std::exception
		{
			public:
				const char * what() const throw();
		};
		
		class GradeTooLowException: public std::exception
		{
			public:
				const char * what() const throw();
		};

		class NotSigned: public std::exception
		{
			public:
				const char * what() const throw();
		};

		std::string	getName(void) const;
		bool		getSigned(void) const;
		int			getGradeSign(void) const;
		int			getGradeExec(void) const;

		void	beSigned(Bureaucrat const & b);

		virtual void execute(Bureaucrat const & executor) const = 0;
	private:
		std::string _name;
		int 		_gradeSign;
		int 		_gradeExec;
		bool		_signed;
};

std::ostream & operator<<(std::ostream & o, Form const & i);

#endif
