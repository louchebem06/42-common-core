/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_day_philo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 19:15:57 by bledda            #+#    #+#             */
/*   Updated: 2021/07/07 18:45:06 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_philosopher.h"

void	ft_define(t_philo *philo, void *id_thread)
{
	philo->eat = 0;
	philo->i = (int *)id_thread;
	philo->args = ft_stats(0);
	philo->last_eat = (ft_get_current_time() - philo->args->start_time);
}

int	ft_life(t_philo *philo)
{
	philo->timestamp = (ft_get_current_time() - philo->args->start_time);
	if (*philo->i + 1 < philo->args->nb_philo)
	{
		while (philo->args->forks[*philo->i].state == 0
			&& philo->args->forks[*philo->i + 1].state == 0)
			if (ft_dead(philo) == 1)
				return (0);
	}
	else if (*philo->i != 0)
	{
		while (philo->args->forks[*philo->i].state == 0
			&& philo->args->forks[0].state == 0)
			if (ft_dead(philo) == 1)
				return (0);
	}
	if (ft_fork(philo) == 1)
		return (0);
	if (ft_eat(philo) == 1)
		return (0);
	if (ft_sleep(philo) == 1)
		return (0);
	if (ft_thinking(philo) == 1)
		return (0);
	return (1);
}

void	*ft_day_philo(void *id_thread)
{
	t_philo	philo;

	ft_define(&philo, id_thread);
	while (1)
		if (ft_life(&philo) == 0)
			return (0);
}
