/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 19:13:53 by bledda            #+#    #+#             */
/*   Updated: 2021/07/07 22:14:33 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_philosopher.h"

t_args	*ft_stats(t_args *args)
{
	static t_args	*static_args;

	if (args != 0)
	{
		static_args = args;
		static_args->dead = 0;
		static_args->eat_max = 0;
	}
	return (static_args);
}

long int	ft_get_current_time(void)
{
	struct timeval	current_time;
	long int		second;
	long int		micro;
	long int		mili;

	gettimeofday(&current_time, NULL);
	second = (current_time.tv_sec * 1000000);
	micro = (second + current_time.tv_usec);
	mili = ft_micro_to_mili(micro);
	return (mili);
}
