/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 11:18:28 by bledda            #+#    #+#             */
/*   Updated: 2021/09/06 16:14:24 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;
	
	std::cout << Fixed::max(a, b) << std::endl;
	
	return 0;

	// Fixed a(1);
	// Fixed const b(Fixed(5.05f) * Fixed(2));

	// std::cout << a << " > " << b << std::endl;
	// if (a > b)
	// 	std::cout << "true" << std::endl;
	// else
	// 	std::cout << "false" << std::endl;

	// std::cout << a << " >= " << b << std::endl;
	// if (a >= b)
	// 	std::cout << "true" << std::endl;
	// else
	// 	std::cout << "false" << std::endl;

	// std::cout << a << " < " << b << std::endl;
	// if (a < b)
	// 	std::cout << "true" << std::endl;
	// else
	// 	std::cout << "false" << std::endl;

	// std::cout << a << " <= " << b << std::endl;
	// if (a <= b)
	// 	std::cout << "true" << std::endl;
	// else
	// 	std::cout << "false" << std::endl;

	// std::cout << a << " == " << b << std::endl;
	// if (a == b)
	// 	std::cout << "true" << std::endl;
	// else
	// 	std::cout << "false" << std::endl;

	// std::cout << a << " != " << b << std::endl;
	// if (a != b)
	// 	std::cout << "true" << std::endl;
	// else
	// 	std::cout << "false" << std::endl;

	// a = a + b;
	// std::cout << a << std::endl;
	// a = a - b;
	// std::cout << a << std::endl;
	// a = a * b;
	// std::cout << a << std::endl;
	// a = a / b;
	// std::cout << a << std::endl;

	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	// std::cout << b << std::endl;

	// std::cout << Fixed::min(a, b) << std::endl;
	// std::cout << Fixed::max(a, b) << std::endl;

	// return (0);
}
