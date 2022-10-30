/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 10:14:51 by bledda            #+#    #+#             */
/*   Updated: 2021/08/25 16:10:46 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>

int PhoneBook::nb_contact = 0;

PhoneBook::PhoneBook(void)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void PhoneBook::add(std::string buff)
{
	buff.clear();
	std::cout << "First name : ";
	while (!buff.length())
		std::getline (std::cin, buff);
	contact[this->nb_contact].set_first_name(buff);

	buff.clear();
	std::cout << "Last name : ";
	while (!buff.length())
		std::getline (std::cin, buff);
	contact[this->nb_contact].set_last_name(buff);

	buff.clear();
	std::cout << "Nickname : ";
	while (!buff.length())
		std::getline (std::cin, buff);
	contact[this->nb_contact].set_nickname(buff);

	buff.clear();
	std::cout << "Phone number : ";
	while (!buff.length())
		std::getline (std::cin, buff);
	contact[this->nb_contact].set_phone_number(buff);

	buff.clear();
	std::cout << "Darkest secret : ";
	while (!buff.length())
		std::getline (std::cin, buff);
	contact[this->nb_contact].set_darkest_secret(buff);

	this->nb_contact++;

	std::cout << std::endl << "Contact add successfully " << this->nb_contact << "/8" << std::endl << std::endl;
}

void PhoneBook::print_contact_col(std::string content) const
{
	if (content.length() < 10)
		std::cout << std::setw(10) << content << "|";
	else
	{
		for (int j = 0; j < 9;j++)
			std::cout << content[j];
		std::cout << ".|";
	}
}

bool PhoneBook::strisdigit(std::string str) const
{
	for (int i = 0;str[i];i++)
		if (!isdigit(str[i]))
			return (0);
	return (1);
}

void PhoneBook::view_contact(int id) const
{
	std::cout << "FIRST NAME : " << contact[id - 1].get_first_name() << std::endl;
	std::cout << "LAST NAME : " << contact[id - 1].get_last_name() << std::endl;
	std::cout << "NICKNAME : " << contact[id - 1].get_nickname() << std::endl;
	std::cout << "PHONE NUMBER : " << contact[id - 1].get_phone_number() << std::endl;
	std::cout << "DARKEST SECRET : " << contact[id - 1].get_darkest_secret() << std::endl;

	std::cout << std::endl << std::endl;
}

void PhoneBook::print_tab(void) const
{
	std::cout << "     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	for (int i = 0; i < this->nb_contact;i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		this->print_contact_col(contact[i].get_first_name());
		this->print_contact_col(contact[i].get_last_name());
		this->print_contact_col(contact[i].get_nickname());
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void PhoneBook::print_data_contact(std::string buff)
{
	buff.clear();
	std::cout << "Please choose an index between 1 - " << this->nb_contact << " : ";
	while (!buff.length())
		std::getline (std::cin, buff);

	bool error = 0;
	if (strisdigit(buff))
	{
		int tmp = atoi(buff.c_str());
		if (tmp >= 1 && tmp <= this->nb_contact)
			this->view_contact(tmp);
		else
			error = 1;
	}
	else
		error = 1;
	if (error)
		std::cout << "Error: " << buff << " is invalid choice" << std::endl << std::endl;
}

bool PhoneBook::input(std::string buff)
{
	if (buff == "ADD")
	{
		if (this->nb_contact == 8)
		{
			std::cout << "Error: No more room in memory" << std::endl << std::endl;
			return (0);
		}
		this->add(buff);
	}
	else if (buff == "SEARCH")
	{
		this->print_tab();
		if (!this->nb_contact)
			std::cout << "PhoneBook is empty, please add contact" << std::endl << std::endl;
		else
			this->print_data_contact(buff);
	}
	else if (buff == "EXIT")
		return (1);
	return (0);
}
