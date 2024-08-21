/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akiiski <akiiski@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 14:09:35 by akiiski           #+#    #+#             */
/*   Updated: 2024/08/14 14:40:22 by akiiski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		n;
	int		i;

	n = 0;
	i = 0;
	while (src[n] != '\0')
	{
		n++;
	}
	dest = (char *)malloc((n + 1) * sizeof(char));
	if (dest == NULL)
		return (0);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	str[] = "Hello I am a string!";

	ft_strdup(str);
	printf("%s", str);
}
*/
