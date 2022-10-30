/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 19:09:53 by bledda            #+#    #+#             */
/*   Updated: 2021/07/03 19:18:36 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_philosopher.h"

int	ft_atoi(const char *str)
{
	unsigned long int	atoi;
	int					i;
	int					symbole;

	i = 0;
	symbole = 1;
	atoi = 0;
	while (ft_isdigit(str[i]))
	{
		atoi = (atoi * 10) + (str[i] - 48);
		i++;
	}
	return ((int)(atoi * symbole));
}

useconds_t	ft_mili_to_micro(int mili)
{
	useconds_t	micro;

	micro = mili * 1000;
	return (micro);
}

long int	ft_micro_to_mili(useconds_t micro)
{
	long int	mili;

	mili = micro / 1000;
	return (mili);
}
