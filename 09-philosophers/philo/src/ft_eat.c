/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 05:04:49 by bledda            #+#    #+#             */
/*   Updated: 2021/07/07 22:52:24 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_philosopher.h"

void	ft_unlock_fork(t_philo *philo)
{
	pthread_mutex_unlock(&philo->args->forks[*philo->i].fork);
	philo->args->forks[*philo->i].state = 1;
	if (*philo->i + 1 < philo->args->nb_philo)
	{
		pthread_mutex_unlock(&philo->args->forks[*philo->i + 1].fork);
		philo->args->forks[*philo->i + 1].state = 1;
	}
	else
	{
		pthread_mutex_unlock(&philo->args->forks[0].fork);
		philo->args->forks[0].state = 1;
	}
}

int	ft_check_dead(t_philo *philo)
{
	if (ft_dead(philo) == 1)
	{
		ft_unlock_fork(philo);
		return (1);
	}
	return (0);
}

int	ft_eat(t_philo *philo)
{
	int	eat_time;

	eat_time = philo->args->time_eat;
	philo->timestamp = (ft_get_current_time() - philo->args->start_time);
	if (ft_check_dead(philo) == 1)
		return (1);
	printf("%ld %d is eating\n", philo->timestamp, *philo->i + 1);
	philo->eat++;
	if (philo->eat == philo->args->nb_max_eat)
		philo->args->eat_max++;
	if (philo->args->eat_max == philo->args->nb_philo || ft_dead(philo) == 1)
		return (1);
	philo->last_eat = (ft_get_current_time() - philo->args->start_time);
	while (eat_time > 0)
	{
		usleep(ft_mili_to_micro(1));
		eat_time--;
		if (ft_check_dead(philo) == 1)
			return (1);
	}
	ft_unlock_fork(philo);
	philo->timestamp = (ft_get_current_time() - philo->args->start_time);
	if (ft_check_dead(philo) == 1)
		return (1);
	return (0);
}
