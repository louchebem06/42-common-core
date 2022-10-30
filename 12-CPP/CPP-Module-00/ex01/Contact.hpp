/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 21:14:59 by bledda            #+#    #+#             */
/*   Updated: 2021/08/25 19:29:43 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <string>

class	Contact
{
	public:
		Contact(void);
		~Contact(void);
		std::string get_first_name(void) const;
		std::string get_last_name(void) const;
		std::string get_nickname(void) const;
		std::string get_phone_number(void) const;
		std::string get_darkest_secret(void) const;
		int 		get_nb_contact(void) const;
		void 		set_first_name(std::string const value);
		void 		set_last_name(std::string const value);
		void 		set_nickname(std::string const value);
		void 		set_phone_number(std::string const value);
		void 		set_darkest_secret(std::string const value);
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
		static int 	nb_contact;
};

#endif
