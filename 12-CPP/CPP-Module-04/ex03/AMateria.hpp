/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 16:43:16 by bledda            #+#    #+#             */
/*   Updated: 2021/09/13 20:08:26 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include "ICharacter.hpp"
# include "IMateriaSource.hpp"

class AMateria
{
	protected:
		std::string _type;
	public:
		AMateria(void);
    	AMateria(std::string const & type);
		AMateria(const AMateria& src);
		
		AMateria& operator=(const AMateria& rhs);

		virtual ~AMateria(void);
		
		std::string const & getType(void) const;
		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter& target);

};

#endif
