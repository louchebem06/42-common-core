/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 17:37:36 by bledda            #+#    #+#             */
/*   Updated: 2021/09/08 13:16:30 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
	ClapTrap Bryan("Bryan");
	ClapTrap Damien("Damien");

	Bryan.attack("Damien");
	Damien.beRepaired(100);
	Damien.takeDamage(100);

	std::cout << std::endl << std::endl;
	ScavTrap scav("scav");

	scav.attack("clap");
	scav.beRepaired(100);
	scav.takeDamage(100);
	scav.guardGate();

	std::cout << std::endl << std::endl;
	return (0);
}
