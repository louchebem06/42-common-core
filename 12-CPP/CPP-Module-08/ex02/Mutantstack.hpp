/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 04:06:07 by bledda            #+#    #+#             */
/*   Updated: 2021/09/25 22:23:00 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANSTACK_HPP
# define MUTANSTACK_HPP

# include <stack>

template<typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack() {};
		virtual ~MutantStack() {};

		MutantStack(MutantStack const & src)
		{
			*this = src;
			return ;
		}

		MutantStack & operator=(MutantStack const & rhs)
		{
			if (this != &rhs)
				this = rhs;
			return (*this);
		}
	
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin()
		{
			return (this->c.begin());
		}

		iterator end()
		{
			return (this->c.end());
		}
};

#endif
