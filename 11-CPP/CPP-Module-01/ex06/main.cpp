/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 04:44:43 by bledda            #+#    #+#             */
/*   Updated: 2021/08/31 08:29:55 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Karen.hpp"

int main(int ac, char **av)
{
	Karen karen;

	if (ac != 2)
	{
		std::cout << "Error : args ./karenFilter" << std::endl;
		return (1);
	}
	karen.complain(av[1]);
	return (0);
}
