/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haltamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:06:19 by haltamim          #+#    #+#             */
/*   Updated: 2024/11/05 14:14:21 by haltamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_strcmp("Husam", "Husam"));
	printf("%d\n", ft_strcmp("Am", "a"));
	printf("%d\n", ft_strcmp("H", "I"));
	printf("%d\n", ft_strcmp("Hello", "World"));
	printf("%d\n", ft_strcmp("Husam", "Husal"));
	printf("%d\n", ft_strcmp("1", "0"));
}*/
