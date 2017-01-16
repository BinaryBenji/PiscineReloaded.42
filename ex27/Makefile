#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bzmuda <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 17:38:41 by bzmuda            #+#    #+#              #
#    Updated: 2016/11/04 17:48:23 by bzmuda           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_display_file

CFLAGS = -Wall -Wextra -Werror

COMPIL = gcc -c

SRC = ./ft_display_file.c

BIN = ./ft_display_file.o

all : $(NAME)
	$(COMPIL) $(SRC) $(CFLAGS)

clean :
	rm -rf ./ft_display_file.o

fclean : clean
	rm -rf $(NAME)

re : fclean all
