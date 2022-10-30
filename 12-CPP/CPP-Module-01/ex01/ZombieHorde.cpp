/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 10:16:30 by bledda            #+#    #+#             */
/*   Updated: 2021/08/27 10:45:38 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name )
{
	Zombie *z = new Zombie[N];
	for (int i = 0; i < N;i++)
	{
		z[i].setName(name);
		z[i].announce();
	}
	return (z);
}
