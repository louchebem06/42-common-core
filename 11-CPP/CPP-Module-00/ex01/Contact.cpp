/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 21:15:05 by bledda            #+#    #+#             */
/*   Updated: 2021/08/25 10:23:21 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Contact.hpp"

int Contact::nb_contact = 0;

Contact::Contact(void)
{
	this->nb_contact++;
	return ;
}

Contact::~Contact(void)
{
	this->nb_contact--;
	return ;
}

std::string Contact::get_first_name(void) const
{
	return (this->first_name);
}

std::string Contact::get_last_name(void) const
{
	return (this->last_name);
}

std::string Contact::get_nickname(void) const
{
	return (this->nickname);
}

std::string Contact::get_phone_number(void) const
{
	return (this->phone_number);
}

std::string Contact::get_darkest_secret(void) const
{
	return (this->darkest_secret);
}

int Contact::get_nb_contact(void) const
{
	return (this->nb_contact);
}

void Contact::set_first_name(std::string const value)
{
	this->first_name = value;
	return ;
}

void Contact::set_last_name(std::string const value)
{
	this->last_name = value;
	return ;
}

void Contact::set_nickname(std::string const value)
{
	this->nickname = value;
	return ;
}

void Contact::set_phone_number(std::string const value)
{
	this->phone_number = value;
	return ;
}

void Contact::set_darkest_secret(std::string const value)
{
	this->darkest_secret = value;
	return ;
}
