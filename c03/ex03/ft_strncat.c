/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akiiski <akiiski@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 15:00:51 by akiiski           #+#    #+#             */
/*   Updated: 2024/08/07 15:43:15 by akiiski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index1;
	unsigned int	index2;

	index1 = 0;
	index2 = 0;
	while (dest[index1] != '\0')
	{
		index1++;
	}
	while (src[index2] != '\0' && index2 < nb)
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
	char	a[] = "this";
	char	b[128] = "What is added ";
	unsigned int	nb = 10;

	ft_strncat(b, a, nb);
	printf("%s", b);
}
*/
