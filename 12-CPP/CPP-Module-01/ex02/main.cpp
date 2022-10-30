/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 10:48:16 by bledda            #+#    #+#             */
/*   Updated: 2021/08/27 15:24:04 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string> 

int main(void)
{
	std::string str 		= "HI THIS IS BRAIN";
	std::string *stringPTR 	= &str;
	std::string &stringREF 	= str;

	std::cout << "str	: " 	<< &str 		<< std::endl;
	std::cout << "strPTR	: " << stringPTR 	<< std::endl;
	std::cout << "strREF	: " << &stringREF	<< std::endl;

	std::cout << *stringPTR << std::endl;
	std::cout << stringREF	<< std::endl;
	return (0);
}
