/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 10:29:37 by bledda            #+#    #+#             */
/*   Updated: 2021/09/18 12:16:40 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

# include "Form.hpp"
# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(std::string const name);
		PresidentialPardonForm(PresidentialPardonForm const & src);
		~PresidentialPardonForm(void);

		PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);

		void execute(Bureaucrat const & executor) const;
	private:
		std::string _target;
};

#endif