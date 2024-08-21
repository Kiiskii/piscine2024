/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akiiski <akiiski@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 10:18:49 by akiiski           #+#    #+#             */
/*   Updated: 2024/08/12 11:08:37 by akiiski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	count;
	int	convert;

	count = 0;
	convert = 0;
	while ((*str <= 13 && *str >= 9) || *str == 32)
		str++;
	while (*str == 43 || *str == 45)
	{
		if (*str == 45)
			count++;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		convert *= 10;
		convert += *str - '0';
		str++;
	}
	if (!(count % 2 == 0))
		return (-convert);
	return (convert);
}
/*
int     main(void)
{
        char    string[] = "    ++--++-123hello23";
        printf("%s\n", string);
        printf("%i", ft_atoi(string));
}
*/
