/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akiiski <akiiski@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 09:48:13 by akiiski           #+#    #+#             */
/*   Updated: 2024/08/07 15:44:16 by akiiski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

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
/*
int	main(void)
{
	char	a[] = "ABC";
	char	b[128] = "DEF";

	ft_strcat(b, a);
	printf("%s", b);
}
*/
