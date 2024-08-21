/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akiiski <akiiski@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 14:43:21 by akiiski           #+#    #+#             */
/*   Updated: 2024/08/15 10:59:18 by akiiski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	int	len;
	int	n;

	i = 0;
	len = max - min;
	n = min;
	if (len <= 0)
		return (NULL);
	arr = (int *)malloc(len * sizeof (int));
	if (arr == NULL)
		return (0);
	while (i < len)
	{
		arr[i] = n;
		i++;
		n++;
	}
	return (arr);
}
/*
int	main(void)
{
	int	i;
	int	*arr;

	arr = ft_range(3, 7);
	for (i = 0; i < (7 - 3); i++)
	{
		printf("%d,", arr[i]);
	}
	printf("%p\n", ft_range(5, 5));
}
*/
