/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 04:44:43 by bledda            #+#    #+#             */
/*   Updated: 2021/08/31 06:54:55 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(void)
{
	Karen karen;

	std::cout << "==== DEBUG ====" << std::endl;
	karen.complain("DEBUG");
	std::cout << std::endl;

	std::cout << "==== INFO ====" << std::endl;
	karen.complain("INFO");
	std::cout << std::endl;

	std::cout << "==== WARNING ====" << std::endl;
	karen.complain("WARNING");
	std::cout << std::endl;

	std::cout << "==== ERROR ====" << std::endl;
	karen.complain("ERROR");
	std::cout << std::endl;
	return (0);
}
