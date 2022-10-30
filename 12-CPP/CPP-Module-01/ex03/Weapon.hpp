/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 11:25:43 by bledda            #+#    #+#             */
/*   Updated: 2021/08/27 12:19:35 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <string>

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon(void);
		std::string const 	getType(void);
		void  				setType(std::string type);
	private:
		std::string _type;
};

#endif
