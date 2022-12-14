# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/28 20:33:58 by mmehran           #+#    #+#              #
#    Updated: 2021/07/24 07:53:56 by bledda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= libft.a
CC 			= gcc
CFLAGS 		= -Wall -Wextra -Werror
RM 			= rm -rf
AR 			= ar rcs

OBJS 		= ft_memset.o \
				ft_bzero.o \
				ft_memcpy.o \
				ft_memccpy.o \
				ft_memmove.o \
				ft_memchr.o \
				ft_memcmp.o \
				ft_strlen.o \
				ft_strlcpy.o \
				ft_strlcat.o \
				ft_strchr.o \
				ft_strrchr.o \
				ft_strnstr.o \
				ft_strncmp.o \
				ft_atoi.o \
				ft_isalpha.o \
				ft_isdigit.o \
				ft_isalnum.o \
				ft_isascii.o \
				ft_isprint.o \
				ft_toupper.o \
				ft_tolower.o \
				ft_calloc.o \
				ft_strdup.o \
				ft_strjoin.o \
				ft_itoa.o \
				ft_substr.o \
				ft_isspace.o \
				ft_islower.o \
				ft_isupper.o \
				ft_putchar_fd.o \
				ft_putstr_fd.o \
				ft_putendl_fd.o \
				ft_putnbr_fd.o \
				ft_strtrim.o \
				ft_strmapi.o \
				ft_split.o \
				get_next_line.o \
				ft_nbrlen.o \
				ft_printf.o \
				ft_lstnew.o \
				ft_lstadd_front.o \
				ft_lstsize.o \
				ft_lstlast.o \
				ft_lstadd_back.o \
				ft_lstdelone.o \
				ft_lstclear.o \
				ft_lstiter.o \
				ft_lstmap.o

$(NAME): 	$(OBJS)
			@printf "                                                                         \r"
			@printf "➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖\n"
			@printf $(magenta)
			@printf "Compiling libft 🔨\n"
			@printf "➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖\n"
			@printf $(reset)
			@$(AR) $@ $^
			@printf "➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖\n"
			@printf $(magenta)
			@printf "Libft is ok ✅\n"
			@printf "➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖\n"
			@printf $(reset)

.c.o:
			@printf $(yellow)
			@printf "Generating libft objects... %-33.33s\r" $@
			@$(CC) $(CFLAGS) -c -o $@ $<
			@printf $(reset)

all: 		$(NAME)

clean:
			@$(RM) $(OBJS) $(OBJS_BONUS)

fclean: 	clean
			@$(RM) $(NAME)

re: 		clean all

.PHONY: 	all clean fclean re

#	COLOR SETTING	############
black 				=	"[1;30m"
red 				=	"[1;31m"
green 				=	"[1;32m"
yellow 				=	"[1;33m"
blue 				=	"[1;34m"
magenta 			=	"[1;35m"
cyan 				=	"[1;36m"
white 				=	"[1;37m"

bg_black 			=	"[40m"
bg_red 				=	"[41m"
bg_green 			=	"[42m"
bg_yellow 			=	"[43m"
bg_blue 			=	"[44m"
bg_magenta 			=	"[45m"
bg_cyan 			=	"[46m"
bg_white 			=	"[47m"

reset 				=	"[0m"
################################
