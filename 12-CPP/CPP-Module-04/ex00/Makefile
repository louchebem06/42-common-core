# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/09 15:03:15 by bledda            #+#    #+#              #
#    Updated: 2021/09/09 15:55:45 by bledda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= zoo

#	FILES			############################################################
SRC			= main.cpp \
				Animal.cpp \
				Dog.cpp \
				Cat.cpp \
				WrongAnimal.cpp \
				WrongCat.cpp

HEADER		= Animal.hpp \
				Dog.hpp \
				Cat.hpp \
				WrongAnimal.hpp \
				WrongCat.hpp

OBJ			= ${SRC:.cpp=.o}
################################################################################

#	COMPILATION		############################################################
CC			= clang++
CFLAGS  	= -Wall -Wextra -Werror -std=c++98
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