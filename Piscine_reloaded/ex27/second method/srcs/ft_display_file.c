/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haltamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:44:20 by haltamim          #+#    #+#             */
/*   Updated: 2024/11/07 12:44:41 by haltamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int	ft_display_file(char *argv)
{
	int		file_text;
	int		file_op;
	char	file_ret[10 + 1];

	file_op = open(argv, O_RDONLY);
	if (file_op == -1)
		return (0);
	file_text = read(file_op, file_ret, 10);
	while (file_text > 0)
	{
		file_ret[file_text] = '\0';
		ft_putstr(file_ret);
		file_text = read(file_op, file_ret, 10);
	}
	close(file_op);
	return (0);
}
