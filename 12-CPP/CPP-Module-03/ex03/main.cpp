/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 17:37:36 by bledda            #+#    #+#             */
/*   Updated: 2021/09/08 13:16:15 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
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
	FragTrap frag("frag");

	frag.attack("clap");
	frag.beRepaired(100);
	frag.takeDamage(100);
	frag.highFivesGuys();
	
	std::cout << std::endl << std::endl;
	DiamondTrap diamond("diamond");
	diamond.whoAmI();
	diamond.attack("clap");
	diamond.highFivesGuys();
	diamond.guardGate();
	diamond.beRepaired(100);
	diamond.takeDamage(100);

	std::cout << std::endl << std::endl;
	return (0);
}
