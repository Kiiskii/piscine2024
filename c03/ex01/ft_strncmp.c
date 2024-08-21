/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akiiski <akiiski@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 09:05:28 by akiiski           #+#    #+#             */
/*   Updated: 2024/08/08 13:22:00 by akiiski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n)
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		else if (s1[index] == '\0' && s2[index] == '\0')
			break ;
		index++;
	}
	return (0);
}
/*
int	main(void)
{
	char	string1[] = "abcccccc";
	char	string2[] = "abccc";
	unsigned int n;

	n = 7;

	printf("%d\n", ft_strncmp(string1, string2, n));
}
*/
