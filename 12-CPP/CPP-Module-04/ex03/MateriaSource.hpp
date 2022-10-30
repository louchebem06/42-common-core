/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:17:10 by bledda            #+#    #+#             */
/*   Updated: 2021/09/13 20:11:35 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"
# include <string>

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* _source[4];
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource& src);

		MateriaSource& operator=(const MateriaSource& rhs);
				
		~MateriaSource(void);
		
    	void learnMateria(AMateria*);
    	AMateria* createMateria(std::string const & type);
};

#endif
