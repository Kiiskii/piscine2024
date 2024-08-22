/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akiiski <akiiski@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 14:52:25 by akiiski           #+#    #+#             */
/*   Updated: 2024/08/07 08:57:42 by akiiski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] == s2[index] && s1[index] != '\0')
	{
		index++;
	}
	return (s1[index] - s2[index]);
}
/*
int	main(void)
{
	char	str1[] = "ABBC";
	char	str2[] = "AA";
	int	result;

	result = ft_strcmp(str1, str2);
	printf("%d", result);
}
*/
