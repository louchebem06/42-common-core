/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 12:14:54 by bledda            #+#    #+#             */
/*   Updated: 2021/09/22 12:35:17 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename ARRAY, typename SIZE>
void iter(ARRAY *tab, SIZE const size, void(*f)(ARRAY const & i))
{
	for (SIZE i = 0; i < size; i++)
		(*f)(tab[i]);
}

template <typename ARRAY>
void view(ARRAY const & i)
{
	std::cout << i << std::endl;
}

#endif
