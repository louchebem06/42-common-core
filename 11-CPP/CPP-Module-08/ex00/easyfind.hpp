/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 21:26:31 by bledda            #+#    #+#             */
/*   Updated: 2021/09/23 22:39:10 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

template<typename T>
bool easyfind(T & tab, int const search)
{
	for (typename T::iterator v = tab.begin(); v != tab.end(); v++)
		if (*v == search)
			return (true);
	return (false);
}

#endif
