/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:52:55 by bledda            #+#    #+#             */
/*   Updated: 2021/09/22 12:13:00 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void swap(T & a, T & b)
{
	T tmp;
	
	tmp = a;
	a 	= b;
	b	= tmp;
}

template<typename T>
T const & min(T const & a, T const & b) {return ((a <= b) ? a : b);}

template<typename T>
T const & max(T const & a, T const & b) {return ((a >= b) ? a : b);}

#endif
