/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dead.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 05:04:49 by bledda            #+#    #+#             */
/*   Updated: 2021/07/07 22:47:47 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_philosopher.h"

int	ft_peuple_eat(t_philo *philo)
{
	if (philo->args->eat_max == philo->args->nb_philo)
	{
		ft_unlock_fork(philo);
		return (1);
	}
	return (0);
}

int	ft_dead(t_philo *philo)
{
	if (philo->args->dead == 1)
	{
		ft_unlock_fork(philo);
		return (1);
	}
	philo->verif_eat = (ft_get_current_time() - philo->args->start_time);
	if (philo->verif_eat - philo->last_eat >= philo->args->time_die)
	{
		philo->timestamp = (ft_get_current_time() - philo->args->start_time);
		printf("%ld %d died\n", philo->timestamp, *philo->i + 1);
		philo->args->dead = 1;
		return (1);
	}
	if (ft_peuple_eat(philo) == 1)
		return (1);
	return (0);
}
