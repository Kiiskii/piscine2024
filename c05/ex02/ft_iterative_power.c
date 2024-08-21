/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akiiski <akiiski@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:20:47 by akiiski           #+#    #+#             */
/*   Updated: 2024/08/13 19:18:37 by akiiski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	x;
	int	result;

	x = 1;
	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (x < power)
	{
		result = result * nb;
		x++;
	}
	return (result);
}
/*
int	main(void)
{
	int	x;
	int	y;
	int	z;
	int	p;

	x = 2;
	y = 0;
	z = -3;
	p = 0;

	printf("%d\n", ft_iterative_power(x, p));
	printf("%d\n", ft_iterative_power(y, p));
	printf("%d\n", ft_iterative_power(z, p));
}
*/
