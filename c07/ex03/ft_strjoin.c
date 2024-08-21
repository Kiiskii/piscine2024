/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akiiski <akiiski@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:30:23 by akiiski           #+#    #+#             */
/*   Updated: 2024/08/17 10:21:21 by akiiski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	index1;
	int	index2;

	index1 = 0;
	index2 = 0;
	while (dest[index1] != '\0')
	{
		index1++;
	}
	while (src[index2] != '\0')
	{
		dest[index1] = src[index2];
		index1++;
		index2++;
	}
	dest[index1] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

int	ft_total_length(int size, char *sep, char **strs)
{
	int	i;
	int	length;

	i = 0;
	length = ft_strlen(sep) * (size - 1);
	while (i < size)
		length = length + ft_strlen(strs[i++]);
	return (length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		length;
	int		i;
	char	*arr;

	if (size == 0)
	{
		arr = malloc(1);
		*arr = '\0';
		return (arr);
	}
	length = ft_total_length(size, sep, strs);
	arr = malloc(length + 1);
	if (arr == NULL)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcat(arr, strs[i]);
		if (i < size - 1)
			ft_strcat(arr, sep);
		i++;
	}
	arr[length] = '\0';
	return (arr);
}
/*
int	main(void)
{
	char	*str[] = {"ASD", "FGHJK", "POUYIRTYR", "werwtwe"};
	char	sep[] = "/";
	int	size;
	char	*printing;

	size = sizeof (str) / sizeof (str[0]);
	printing = ft_strjoin(size, str, sep);
	printf("%s\n", printing);
}
*/
