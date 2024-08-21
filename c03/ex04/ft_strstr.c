/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akiiski <akiiski@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 16:10:14 by akiiski           #+#    #+#             */
/*   Updated: 2024/08/08 11:06:03 by akiiski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	indexs;
	int	indextf;

	indextf = 0;
	indexs = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[indexs] != '\0')
	{
		indextf = 0;
		while (to_find[indextf] != '\0')
		{
			if (str[indexs] != to_find[indextf])
				break ;
			indexs++;
			indextf++;
		}
		if (to_find[indextf] == '\0')
			return (&str[indexs - indextf]);
		indexs++;
	}
	return (0);
}
/*
int	main(void)
{
	char	a[] = "There is a needle the in here";
	char	b[128] = "the";

	printf("%s", ft_strstr(a, b));
}
*/
