# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/06 17:39:14 by bledda            #+#    #+#              #
#    Updated: 2021/09/08 11:01:23 by bledda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= DiamondTrap

#	FILES			############################################################
SRC			= main.cpp \
				ClapTrap.cpp \
				ScavTrap.cpp \
				FragTrap.cpp \
				DiamondTrap.cpp

HEADER		= ClapTrap.hpp \
				ScavTrap.hpp \
				FragTrap.hpp \
				DiamondTrap.hpp

OBJ			= ${SRC:.cpp=.o}
################################################################################

#	COMPILATION		############################################################
CC			= clang++
CFLAGS  	= -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow
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