/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fork.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 05:04:49 by bledda            #+#    #+#             */
/*   Updated: 2021/07/07 18:40:15 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_philosopher.h"

int	ft_fork_msg(t_philo *philo)
{
	if (ft_dead(philo) == 1)
		return (1);
	printf("%ld %d has taken a fork\n", philo->timestamp, *philo->i + 1);
	return (0);
}

void	ft_lock_fork(int id, t_philo *philo)
{
	if (id == 0)
	{
		pthread_mutex_lock(&philo->args->forks[0].fork);
		philo->args->forks[*philo->i].state = 0;
	}
	else
	{
		pthread_mutex_lock(&philo->args->forks[*philo->i].fork);
		philo->args->forks[*philo->i].state = 0;
	}
}

int	ft_fork(t_philo *philo)
{
	ft_lock_fork(1, philo);
	philo->timestamp = (ft_get_current_time() - philo->args->start_time);
	if (ft_fork_msg(philo) == 1)
		return (1);
	if (*philo->i + 1 < philo->args->nb_philo)
	{
		while (philo->args->forks[*philo->i].state == 0
			&& philo->args->forks[*philo->i + 1].state == 0)
			if (ft_dead(philo) == 1)
				return (1);
		pthread_mutex_lock(&philo->args->forks[*philo->i + 1].fork);
		philo->args->forks[*philo->i + 1].state = 0;
	}
	else
	{
		while (philo->args->forks[*philo->i].state == 0
			&& philo->args->forks[0].state == 0)
			if (ft_dead(philo) == 1)
				return (1);
		ft_lock_fork(0, philo);
	}
	philo->timestamp = (ft_get_current_time() - philo->args->start_time);
	if (ft_fork_msg(philo) == 1)
		return (1);
	return (0);
}
