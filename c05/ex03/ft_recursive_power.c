/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akiiski <akiiski@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:57:27 by akiiski           #+#    #+#             */
/*   Updated: 2024/08/13 14:37:23 by akiiski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
		nb *= ft_recursive_power(nb, power - 1);
	return (nb);
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
	p = 4;

	printf("%d\n", ft_recursive_power(x, p));
	printf("%d\n", ft_recursive_power(y, p));
	printf("%d\n", ft_recursive_power(z, p));
}
*/
