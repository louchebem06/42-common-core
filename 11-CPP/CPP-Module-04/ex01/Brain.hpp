/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 16:14:39 by bledda            #+#    #+#             */
/*   Updated: 2021/09/10 19:08:16 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	public:
		Brain(void);
		Brain(Brain const & src);
		virtual ~Brain(void);

		Brain &	operator=(Brain const & rhs);
		
		std::string	ideas[100];

		void	setIdeas(std::string const ideas, int const i);
		void	viewIdeas(void);
};

#endif
