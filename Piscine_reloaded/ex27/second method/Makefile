# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: haltamim <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 12:45:56 by haltamim          #+#    #+#              #
#    Updated: 2024/11/07 12:46:18 by haltamim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Makefile FLAGS = -Wall -Wextra -Werror
NAME_PROG = -o ft_display_file
INCLUDES = -Iincludes/
FILES = srcs/*.c
LIB = *.o 

all: 
	gcc -c srcs/library/*.c $(INCLUDES)
	gcc $(NAME_PROG) $(FLAGS) $(INCLUDES) $(FILES) $(LIB)

clean :
	/bin/rm -rf *.o

fclean: clean
	/bin/rm -rf ./ft_display_file
