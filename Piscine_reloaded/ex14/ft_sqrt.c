/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haltamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:38:40 by haltamim          #+#    #+#             */
/*   Updated: 2024/11/05 13:49:40 by haltamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	n;

	if (nb < 0)
		return (0);
	n = 1;
	while (n * n <= nb)
	{
		if (n * n == nb)
			return (n);
		n++;
	}
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_sqrt(-1));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(3));
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(6));
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(12));
	printf("%d\n", ft_sqrt(16));
}*/
