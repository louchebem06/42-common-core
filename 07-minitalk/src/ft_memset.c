/* ************************************************************************** *//*                                                                            *//*                                                        :::      ::::::::   *//*   ft_memset.c                                        :+:      :+:    :+:   *//*                                                    +:+ +:+         +:+     *//*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        *//*                                                +#+#+#+#+#+   +#+           *//*   Created: 2021/03/22 10:54:33 by bledda            #+#    #+#             *//*   Updated: 2021/06/01 13:03:52 by bledda           ###   ########.fr       *//*                                                                            *//* ************************************************************************** */#include "../header/minitalk.h"void	*ft_memset(void *b, int c, size_t len){	size_t	i;	i = 0;	while (i < len)		((char *)b)[i++] = c;	return (b);}