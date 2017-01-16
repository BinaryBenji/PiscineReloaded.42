#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bzmuda <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 16:48:03 by bzmuda            #+#    #+#              #
#    Updated: 2016/11/04 16:57:40 by bzmuda           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

COMPIL = gcc -c

SRC = ./srcs/ft_putchar.c \
	./srcs/ft_strlen.c \
	./srcs/ft_putstr.c \
	./srcs/ft_swap.c \
	./srcs/ft_strcmp.c

BIN = ./ft_putchar.o \
	./ft_strlen.o \
	./ft_putstr.o \
	./ft_swap.o \
	./ft_strcmp.o

INCL = ./includes/ft.h

CREA = ar rc

RANLIB = RANLIB

all : $(NAME)

$(NAME) :
	$(COMPIL) $(SRC) -I $(INCL) $(CFLAGS)
	$(CREA) $(NAME) $(BIN)
	$(RANLIB) $(NAME)

clean :
	rm -rf ./ft_putchar.o \
			./ft_strlen.o \
			./ft_putstr.o \
			./ft_swap.o \
			./ft_strcmp.o

fclean : clean
	rm -rf $(NAME)

re : fclean all
