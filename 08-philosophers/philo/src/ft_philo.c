/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_philo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 19:15:38 by bledda            #+#    #+#             */
/*   Updated: 2021/07/07 22:29:48 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_philosopher.h"

void	ft_mutex(t_args *args, int *id)
{
	int	i;

	i = 0;
	while (i < args->nb_philo)
	{
		pthread_mutex_init(&args->forks[i].fork, NULL);
		args->forks[i].state = 1;
		pthread_mutex_unlock(&args->forks[i].fork);
		id[i] = i;
		i++;
	}
}

void	ft_philo(t_args *args)
{
	pthread_t		*philo;
	int				*id;
	int				i;

	philo = malloc(sizeof(pthread_t) * args->nb_philo);
	args->forks = malloc(sizeof(t_fork) * args->nb_philo);
	id = malloc(sizeof(int) * args->nb_philo);
	ft_mutex(args, id);
	ft_stats(args);
	i = -1;
	while (++i < args->nb_philo)
	{
		usleep(100);
		pthread_create(&philo[i], NULL, ft_day_philo, &id[i]);
	}
	i = -1;
	while (++i < args->nb_philo)
		pthread_join(philo[i], NULL);
	i = -1;
	while (++i < args->nb_philo)
		pthread_mutex_destroy(&args->forks[i].fork);
	free(args->forks);
	free(id);
	free(philo);
}
