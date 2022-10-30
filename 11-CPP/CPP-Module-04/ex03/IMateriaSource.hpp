/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 16:45:14 by bledda            #+#    #+#             */
/*   Updated: 2021/09/13 20:10:32 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <string>
# include "AMateria.hpp"

class IMateriaSource
{
	public:
    	virtual ~IMateriaSource(void) {}
    	virtual void learnMateria(AMateria*) = 0;
    	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif
