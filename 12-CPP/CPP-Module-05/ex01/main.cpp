/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 00:59:25 by bledda            #+#    #+#             */
/*   Updated: 2021/10/06 09:08:08 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include "Form.hpp"

int main(void)
{
	try
	{
		Form		xc33("xc33", 15, 1);
		Form		xc34("xc42", 51, 1);
		Bureaucrat sean(50, "Sean Paul");
		
		std::cout << sean << std::endl;
		std::cout << xc33 << std::endl;
		std::cout << xc34 << std::endl;

		sean.signForm(xc33);
		sean.signForm(xc34);
		//xc33.beSigned(sean);
		xc34.beSigned(sean);

		std::cout << xc33 << std::endl;
		std::cout << xc34 << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
