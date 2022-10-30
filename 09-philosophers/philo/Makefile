# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/03 19:23:03 by bledda            #+#    #+#              #
#    Updated: 2021/07/07 14:37:07 by bledda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				= philo

HEADER_FILE 		= header/ft_philosopher.h

FOLDER				= src/

SRCS				= convert.c \
						ft_day_philo.c \
						ft_philo.c \
						info.c \
						is.c \
						main.c \
						ft_fork.c \
						ft_eat.c \
						ft_thinking.c \
						ft_dead.c \
						ft_sleep.c

SRC					= $(addprefix ${FOLDER},${SRCS})

OBJS				= ${SRC:.c=.o}

CC					= gcc
CFLAGS  			= -Wall -Wextra -Werror
RM					= rm -f

$(NAME):	${OBJS}
			$(CC) $(CFLAGS) ${OBJS} -lpthread -o $(NAME)

all:		${NAME}

%.o: %.c	$(HEADER_FILE)
			$(CC) -c $(CFLAGS) -o $@ $<

re: 		fclean all

clean:
			${RM} $(OBJS_COMU) $(OBJS_BONUS) $(OBJS)

fclean:		clean
			${RM} $(NAME)

.PHONY: 	all clean fclean re
