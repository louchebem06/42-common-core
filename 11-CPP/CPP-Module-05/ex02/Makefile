# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/14 00:55:56 by bledda            #+#    #+#              #
#    Updated: 2021/09/18 12:08:48 by bledda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= exec.out

#	FILES			############################################################
SRC			= main.cpp \
				Bureaucrat.cpp \
				Form.cpp \
				ShrubberyCreationForm.cpp \
				RobotomyRequestForm.cpp \
				PresidentialPardonForm.cpp

HEADER		= Bureaucrat.hpp \
				Form.hpp \
				ShrubberyCreationForm.hpp \
				RobotomyRequestForm.hpp \
				PresidentialPardonForm.hpp

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