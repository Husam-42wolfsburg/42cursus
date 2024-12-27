# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: haltamim <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/06 13:54:20 by haltamim          #+#    #+#              #
#    Updated: 2024/11/06 13:54:39 by haltamim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and Flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I includes

# Directories
SRCDIR = srcs
INCDIR = includes
OBJDIR = obj

# Sources and Objects
SRC = $(SRCDIR)/ft_putchar.c $(SRCDIR)/ft_putstr.c $(SRCDIR)/ft_strcmp.c $(SRCDIR)/ft_strlen.c $(SRCDIR)/ft_swap.c
OBJ = $(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

# Library name
NAME = libft.a

# Default target: all
all: $(NAME)

# Creating the library
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Create object files
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean: remove object files
clean:
	rm -rf $(OBJDIR)

# Fclean: remove object files and library
fclean: clean
	rm -f $(NAME)

# Rebuild the library
re: fclean all

# Phony targets to prevent conflicts with files named clean, fclean, etc.
.PHONY: all clean fclean re
