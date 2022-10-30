/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:14:59 by bledda            #+#    #+#             */
/*   Updated: 2021/09/13 20:11:00 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(std::string const & type);
		Ice(Ice const & src);

		Ice& operator=(const Ice& rhs);

		~Ice(void);
		
		AMateria* clone(void) const;
		void use(ICharacter& target);
};

#endif
