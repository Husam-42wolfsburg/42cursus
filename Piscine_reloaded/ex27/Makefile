# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: haltamim <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 15:18:14 by haltamim          #+#    #+#              #
#    Updated: 2024/11/07 15:18:22 by haltamim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile for ft_display_file

NAME = ft_display_file

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_display_file.c
OBJ = $(SRC:.c=.o)

# Targets
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
