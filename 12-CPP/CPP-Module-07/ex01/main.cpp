/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 12:14:57 by bledda            #+#    #+#             */
/*   Updated: 2021/09/22 12:36:07 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>

int main(void)
{
	std::string tab1[] = {"42","Ecole","CPP"};
	int 		tab2[] = {0, 1, 2, 3, 4, 5};
	float 		tab3[] = {1.1f, 2.32f, 42.3f};

	::iter(tab1, sizeof(tab1)/sizeof(*tab1), ::view);
	::iter(tab2, sizeof(tab2)/sizeof(*tab2), ::view);
	::iter(tab3, sizeof(tab3)/sizeof(*tab3), ::view);
	return (0);
}
