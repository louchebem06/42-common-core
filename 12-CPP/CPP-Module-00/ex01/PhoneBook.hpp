/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 10:14:44 by bledda            #+#    #+#             */
/*   Updated: 2021/08/25 16:10:53 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <string>
# include "Contact.hpp"

class	PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		bool input(std::string buff);
	private:
		Contact 	contact[8];
		static int	nb_contact;
		void add(std::string buff);
		void print_contact_col(std::string content) const;
		void view_contact(int id) const;
		bool strisdigit(std::string str) const;
		void print_tab(void) const;
		void print_data_contact(std::string buff);
};

#endif