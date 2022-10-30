/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 10:38:28 by bledda            #+#    #+#             */
/*   Updated: 2021/07/07 17:32:09 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_philosopher.h"

void	ft_error(int i, int nb)
{
	if (i == 0)
		printf("Error\nNumber arguments is not valid\n\
number of philosophers, time to die, time to eat, \
time to sleep, [number_of_times_each_philosopher_must_eat]\n");
	else if (i == 1)
		printf("Error\nArguments %d is not digit\n", nb);
}

int	ft_check(char **av)
{
	if (!(ft_strisdigit(av[1])))
		ft_error(1, 1);
	if (!(ft_strisdigit(av[2])))
		ft_error(1, 2);
	if (!(ft_strisdigit(av[3])))
		ft_error(1, 3);
	if (!(ft_strisdigit(av[4])))
		ft_error(1, 4);
	if (ft_strisdigit(av[1]) == 0 || ft_strisdigit(av[2]) == 0
		|| ft_strisdigit(av[3]) == 0 || ft_strisdigit(av[4]) == 0)
		return (1);
	return (0);
}

int	main(int ac, char **av)
{
	t_args	args;

	if (ac == 5 || ac == 6)
	{
		if (ft_check(av) == 1)
			return (0);
		args.start_time = ft_get_current_time();
		args.nb_philo = ft_atoi(av[1]);
		args.time_die = ft_atoi(av[2]);
		args.time_eat = ft_atoi(av[3]);
		args.time_sleep = ft_atoi(av[4]);
		if (ac == 6 && ft_strisdigit(av[5]))
			args.nb_max_eat = ft_atoi(av[5]);
		else if (ac == 6)
		{
			ft_error(1, 5);
			return (0);
		}
		else
			args.nb_max_eat = -1;
		ft_philo(&args);
	}
	else
		ft_error(0, 0);
	return (0);
}
