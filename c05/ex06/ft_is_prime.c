/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akiiski <akiiski@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 18:15:22 by akiiski           #+#    #+#             */
/*   Updated: 2024/08/13 11:32:37 by akiiski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	count;
	int	i;

	count = 0;
	i = 1;
	if (nb == 1 || nb <= 0)
		return (0);
	while (i <= nb)
	{
		if (nb % i == 0)
			count++;
		if (count == 3)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	int	x;

	x = 211;
	printf("%d", ft_is_prime(x));
}
*/
