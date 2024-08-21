/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akiiski <akiiski@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 08:27:59 by akiiski           #+#    #+#             */
/*   Updated: 2024/08/13 14:26:08 by akiiski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	x;
	int	result;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	result = nb;
	x = 1;
	while (x < nb)
	{
		result *= (nb - x);
		x++;
	}
	return (result);
}
/*
int	main(void)
{
	int	x;
	int	y;

	y = -5;
	x = 0;
	printf("%d\n", ft_iterative_factorial(x));
	printf("%d", ft_iterative_factorial(y));
}
*/
