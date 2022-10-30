/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 21:26:29 by bledda            #+#    #+#             */
/*   Updated: 2021/09/23 22:37:41 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>
#include <list>

int main(void)
{
	std::	vector<int> tab 	= {10,20,30,40,50,60,70,80,90};
	std::	list<int> 	liste 	= {10,20,30,40,50,60,70,80,90,100};

	(easyfind(tab, 20)) ?
		std::cout << "Found" << std::endl :
		std::cout << "Not found" << std::endl;

	(easyfind(liste, 100)) ?
		std::cout << "Found" << std::endl :
		std::cout << "Not found" << std::endl;
	return (0);
}
