/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haltamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:32:39 by haltamim          #+#    #+#             */
/*   Updated: 2024/11/05 12:52:17 by haltamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	n;

	n = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		n = n * nb;
		nb = nb - 1;
	}
	return (n);
}

/*int main()
{
    // Testing the function with different values
    printf("5: %d\n", ft_iterative_factorial(5));   // Expected: 120
    printf("0: %d\n", ft_iterative_factorial(0));   // Expected: 1
    printf("-1: %d\n", ft_iterative_factorial(-1)); // Expected: 0
    printf("10: %d\n", ft_iterative_factorial(10)); // Expected: 3628800

    return 0;
}*/
