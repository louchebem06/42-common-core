/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 15:46:57 by bledda            #+#    #+#             */
/*   Updated: 2021/08/27 12:20:38 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie
{
	public:
		Zombie(void);
		~Zombie(void);
		void 		announce(void) const;
		void 		setName(std::string name);
		std::string getName(void) const;
	private:
		std::string		_name;
};

Zombie 	*newZombie( std::string name );
void 	randomChump( std::string name );

#endif
