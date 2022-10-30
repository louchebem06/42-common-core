/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 00:59:19 by bledda            #+#    #+#             */
/*   Updated: 2021/10/06 09:04:02 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat(int const grade, std::string const name);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat(void);

		Bureaucrat & operator=(Bureaucrat const & rhs);
		
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

		int			getGrade(void) const;
		std::string getName(void) const;

		void	upGrade(void);
		void	downGrade(void);
	private:
		int			_grade;
		std::string	_name;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & i);

#endif
