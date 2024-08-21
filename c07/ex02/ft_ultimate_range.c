/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akiiski <akiiski@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:11:05 by akiiski           #+#    #+#             */
/*   Updated: 2024/08/16 12:51:47 by akiiski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;
	int	n;

	i = 0;
	len = max - min;
	n = min;
	if (len <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(len * sizeof (int));
	if (*range == NULL)
		return (-1);
	while (i < len)
	{
		(*range)[i] = n + i;
		i++;
	}
	return (len);
}
/*
int	main(void)
{
	int	*range;

	printf("%d\n", ft_ultimate_range(&range, -20, 4));
	printf("%d\n", ft_ultimate_range(&range, 5, 5));
}
*/
