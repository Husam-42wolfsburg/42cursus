/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haltamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:11:04 by haltamim          #+#    #+#             */
/*   Updated: 2024/11/07 15:25:06 by haltamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>  // for open()
#include <unistd.h> // for read(), write(), close()
#include <stdio.h>  // for perror()

#define BUFFER_SIZE 1024  // Fixed-size buffer for reading

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

// Function to display error messages
void	display_error(char *message)
{
	write(2, message, ft_strlen(message));
	write(2, "\n", 1);
}

// Function to handle argument checking
int	check_arguments(int argc)
{
	if (argc < 2)
	{
		display_error("File name missing.");
		return (1);
	}
	if (argc > 2)
	{
		display_error("Too many arguments.");
		return (1);
	}
	return (0);
}

// Function to open and read the file
int	read_file(char *filename)
{
	int		fd;
	int		bytes_read;
	char	buffer[BUFFER_SIZE];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		display_error("Cannot read file.");
		return (-1);
	}
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	}
	close(fd);
	return (0);
}

// Main function that runs the program logic
int	main(int argc, char *argv[])
{
	if (check_arguments(argc))
	{
		return (1);
	}
	return (read_file(argv[1]));
}
