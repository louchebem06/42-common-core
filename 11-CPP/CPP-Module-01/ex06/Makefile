# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/31 04:45:59 by bledda            #+#    #+#              #
#    Updated: 2021/08/31 08:15:43 by bledda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= karenFilter

#	FILES			############################################################
SRC			= main.cpp \
				Karen.cpp

HEADER		= Karen.hpp

OBJ			= ${SRC:.cpp=.o}
################################################################################

#	COMPILATION		############################################################
CC			= clang++
CFLAGS  	= -Wall -Wextra -Werror
RM			= rm -rf
################################################################################

#	RULES	####################################################################
$(NAME):	${OBJ}
			@$(CC) $(CFLAGS) ${OBJ} -o $(NAME)
			@printf "done.\n"

all:		${NAME}

%.o: %.cpp	$(HEADER)
			@$(CC) -c $(CFLAGS) -o $@ $<

re: 		fclean all

clean:
			@${RM} ${OBJ}
			@printf "obj delete.\n"

fclean:		clean
			@${RM} $(NAME)
			@printf "binary delete.\n"

.PHONY: 	all clean fclean re
#################################################################################