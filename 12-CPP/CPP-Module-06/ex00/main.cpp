/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:13:23 by bledda            #+#    #+#             */
/*   Updated: 2021/09/20 17:55:38 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>
#include <limits>

size_t count_char(std::string const str, char const *set,
				int const begin, int const end)
{
	size_t count = 0;

	for (int i = begin; i < end; i++)
		for (int j = 0; set[j]; j++)
			if (str.at(i) == set[j])
				count++;
	return (count);
}

bool strIsFloat(std::string const str)
{
	std::string const exceptions[8] = {"-inff",
										"inff",
										"+inff",
										"nanf",
										"-inf",
										"inf",
										"+inf",
										"nan"};
	for (int i = 0; i < 8; i++)
		if (!str.compare(exceptions[i]))
			return (true);
	if (count_char(str, ".", 0, str.size()) > 1
		|| count_char(str, "+-", 1, str.size())
		|| count_char(str, "fF", 0, str.size() - 1)
		|| count_char(str, ".-+fF0123456789", 0, str.size()) != str.size())
		return (false);
	return (true);
}

int main(int ac, char const **av)
{
	if (ac > 3)
		std::cerr << "Too many arguments" << std::endl;
	else if (ac == 1)
		std::cerr << "No argument" << std::endl;
	if (ac > 3 || ac == 1)
		return (1);

	std::string const 	arg 	= (ac == 3) ?
									static_cast<std::string>(av[1])
								 	+ static_cast<std::string>(av[2]) :
									av[1];
	long double const	inputD 	= (arg.size() > 1) ?
									atof(arg.c_str()) :
										(isdigit(arg.at(0))) ?
											atof(arg.c_str()) :
											arg.at(0);
	long int  	const 	inputI 	= static_cast<long int>(inputD);
	
	/*
		IS NOT FLOAT ////////////////////////////////////////////////////////
	*/
	if (arg.size() > 1 && !strIsFloat(arg))
	{
		std::string const type[4] = {"char: ",
									"int: ",
									"float: ",
									"double: "};
		for (int i = 0; i < 4; i++)
			std::cout << type[i] << "impossible" << std::endl;
		return (0);
	}
	//////////////////////////////////////////////////////////////////////////

	/*
		CHAR /////////////////////////////////////////////////////////////////
	*/
	std::cout << "char: ";
	
	(inputI < 0 || inputI > 127) ?
		std::cout << "impossible" :
			(!isprint(inputI)) ?
				std::cout << "Non displayable" :
				std::cout << "'" << static_cast<char>(inputI) << "'";
		
	std::cout << std::endl;
	//////////////////////////////////////////////////////////////////////////
	
	/*
		INT //////////////////////////////////////////////////////////////////
	*/
	std::cout << "int: ";
	
	(inputI < std::numeric_limits<int>::min()
	|| inputI > std::numeric_limits<int>::max()) ?
		std::cout << "impossible" :
			std::cout << inputI;
	
	std::cout << std::endl;
	//////////////////////////////////////////////////////////////////////////
	
	/*
		FLOAT ////////////////////////////////////////////////////////////////
	*/
	std::cout << "float: ";
	
	(inputD < -std::numeric_limits<float>::max()
	|| inputD > std::numeric_limits<float>::max()) ?
		std::cout << "impossible" :
			(static_cast<float>(inputI) == inputD) ?
				std::cout << inputD << ".0f" :
				std::cout << inputD << "f";

	std::cout << std::endl;
	//////////////////////////////////////////////////////////////////////////

	/*
		DOUBLE ///////////////////////////////////////////////////////////////
	*/
	std::cout << "double: ";
	
	(inputD < -std::numeric_limits<double>::max()
	|| inputD > std::numeric_limits<double>::max()) ?
		std::cout << "impossible" :
			(static_cast<double>(inputI) == inputD) ?
				std::cout << inputD << ".0" :
				std::cout << inputD;
	
	std::cout << std::endl;
	//////////////////////////////////////////////////////////////////////////
	return (0);
}
