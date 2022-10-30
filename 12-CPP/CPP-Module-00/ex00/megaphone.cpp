/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 20:30:03 by bledda            #+#    #+#             */
/*   Updated: 2021/08/25 10:11:18 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

int main(int ac, char **av)
{
	std::string tmp;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int j = 1;av[j];j++)
			for (int i = 0;av[j][i];i++)
				tmp += (char)toupper(av[j][i]);
		std::cout << tmp << std::endl;
	}
	return (0);
}
