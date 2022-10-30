/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_philosopher.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 19:00:44 by bledda            #+#    #+#             */
/*   Updated: 2021/07/07 22:29:37 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PHILOSOPHER_H
# define FT_PHILOSOPHER_H

# include <sys/time.h>
# include <stdio.h>
# include <stdlib.h>
# include <pthread.h>
# include <unistd.h>

typedef struct s_fork
{
	int				state;
	pthread_mutex_t	fork;
}					t_fork;

typedef struct s_args
{
	int			nb_philo;
	int			time_die;
	int			time_eat;
	int			time_sleep;
	int			nb_max_eat;
	long int	start_time;
	int			dead;
	int			eat_max;
	t_fork		*forks;
}				t_args;

typedef struct s_philo
{
	int			*i;
	long int	timestamp;
	long int	last_eat;
	long int	verif_eat;
	int			eat;
	t_args		*args;
}				t_philo;

int			ft_isdigit(int c);
int			ft_strisdigit(char *str);
int			ft_atoi(const char *str);
useconds_t	ft_mili_to_micro(int mili);
long int	ft_micro_to_mili(useconds_t micro);
long int	ft_get_current_time(void);
t_args		*ft_stats(t_args *args);
void		*ft_day_philo(void *id_thread);
void		ft_philo(t_args *args);
int			ft_dead(t_philo *philo);
int			ft_thinking(t_philo *philo);
int			ft_sleep(t_philo *philo);
int			ft_eat(t_philo *philo);
int			ft_fork(t_philo *philo);
void		ft_unlock_fork(t_philo *philo);

#endif