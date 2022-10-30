/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sleep.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 05:04:49 by bledda            #+#    #+#             */
/*   Updated: 2021/07/07 22:50:21 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_philosopher.h"

int	ft_sleep(t_philo *philo)
{
	int	sleep;

	if (ft_dead(philo) == 1)
		return (1);
	sleep = philo->args->time_sleep;
	printf("%ld %d is sleeping\n", philo->timestamp, *philo->i + 1);
	while (sleep > 0)
	{
		usleep(ft_mili_to_micro(1));
		sleep--;
		if (ft_dead(philo) == 1)
			return (1);
	}
	philo->timestamp = (ft_get_current_time() - philo->args->start_time);
	if (ft_dead(philo) == 1)
		return (1);
	return (0);
}
