/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 10:52:46 by bledda            #+#    #+#             */
/*   Updated: 2021/09/21 11:33:37 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stdint.h>

struct Data
{
	std::string title;
	std::string description;
	int 		price;
};

uintptr_t serialize(Data* ptr)
{
	uintptr_t raw;

	raw = reinterpret_cast<uintptr_t>(ptr);
	return (raw);
}

Data* deserialize(uintptr_t raw)
{
	Data* ptr;

	ptr = reinterpret_cast<Data *>(raw);
	return (ptr);
}

int main(void)
{
	Data * 		announce = new Data;
	Data * 		announce_save;
	uintptr_t 	save;

	announce->title 		= "I'm title";
	announce->description 	= "I'm description";
	announce->price 		= 50;
	
	save 			= serialize(announce);
	announce_save 	= deserialize(save);

	std::cout << "uintptr_t: " << save << std::endl;
	std::cout << announce_save->title;
	(!announce_save->title.compare(announce->title)) ?
		std::cout << " ✅" << std::endl :
		std::cout << " ❌" << std::endl;
	std::cout << announce_save->description;
	(!announce_save->description.compare(announce->description)) ?
		std::cout << " ✅" << std::endl :
		std::cout << " ❌" << std::endl;
	std::cout << announce_save->price;
	(announce_save->price == announce->price) ?
		std::cout << "$ ✅" << std::endl :
		std::cout << "$ ❌" << std::endl;
	return (0);
}
