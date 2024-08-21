/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akiiski <akiiski@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 10:16:01 by akiiski           #+#    #+#             */
/*   Updated: 2024/08/13 14:28:00 by akiiski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	result = nb;
	if (nb > 1)
	{
		result *= ft_recursive_factorial(nb - 1);
	}
	return (result);
}
/*
int	main(void)
{
	int	x;
	int	y;
	int	z;

	x = 5;
	y = -5;
	z = 0;
	printf("%d\n", ft_recursive_factorial(x));
	printf("%d\n", ft_recursive_factorial(y));
	printf("%d", ft_recursive_factorial(z));
}
*/
