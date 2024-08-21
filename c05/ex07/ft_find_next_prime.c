/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akiiski <akiiski@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 18:32:31 by akiiski           #+#    #+#             */
/*   Updated: 2024/08/13 11:33:58 by akiiski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	if (nb <= 0 || nb == 1)
		return (2);
	while (i <= nb)
	{
		if (nb % i == 0)
			count++;
		if (count == 3)
		{
			count = 1;
			i = 1;
			nb++;
		}
		i++;
	}
	return (nb);
}
/*
int	main(void)
{
	int	x;

	x = 314;
	printf("%d", ft_find_next_prime(x));
}
*/
