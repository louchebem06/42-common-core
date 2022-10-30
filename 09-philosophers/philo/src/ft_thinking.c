/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_thinking.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 05:04:49 by bledda            #+#    #+#             */
/*   Updated: 2021/07/07 22:12:56 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_philosopher.h"

int	ft_thinking(t_philo *philo)
{
	if (ft_dead(philo) == 1)
		return (1);
	printf("%ld %d is thinking\n", philo->timestamp, *philo->i + 1);
	return (0);
}
