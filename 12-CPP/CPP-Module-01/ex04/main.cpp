/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 15:40:29 by bledda            #+#    #+#             */
/*   Updated: 2021/08/31 01:08:46 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int ac, const char **av)
{
	std::string search,
				replace,
				file,
				data,
				tmp;

	int 		find_size;

	if (ac != 4)
	{
		std::cerr << "Error : ./replace [file] [search] [replace]" << std::endl;
		return (1);
	}

	file 	= av[1];
	search 	= av[2];
	replace = av[3];

	std::ifstream ifs(file);
	if (!ifs.is_open())
	{
		std::cerr << "Error : " << file << " is nothing" << std::endl;
		return (1);
	}
	while (getline(ifs, tmp))
		data += tmp + "\n";
	ifs.close();

	while (1)
	{
		find_size = data.find(search);
		if (find_size >= 0)
		{
			data.erase(find_size, search.length());
			data.insert(find_size, replace);
		}
		else
			break;
	}

	std::ofstream ofs(file + ".replace");
	ofs << data;
	ofs.close();
	return (0);
}
