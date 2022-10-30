/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 21:19:09 by bledda            #+#    #+#             */
/*   Updated: 2021/08/25 16:25:27 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
	std::string buff;
	PhoneBook 	phonebook;

	while (1)
	{
		std::cout << "Please input action : ";
		std::getline (std::cin, buff);
		std::cout << std::endl;
		if (phonebook.input(buff))
			break ;
	}
	return (0);
}
