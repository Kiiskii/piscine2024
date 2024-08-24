/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akiiski <akiiski@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:07:32 by akiiski           #+#    #+#             */
/*   Updated: 2024/08/22 09:03:43 by akiiski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

_Bool	ft_haschar(char a, char *charset)
{	
	int	j;

	j = 0;
	while (charset[j] != '\0')
	{
		if (a == charset[j])
			return (1);
		j++;
	}
	return (0);
}

int	arr_size(char *str, char *charset)
{
	int	size;
	int	i;

	size = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (ft_haschar(str[i], charset) && str[i] != '\0')
			i++;
		if (str[i] == '\0')
			break ;
		size++;
		while (!ft_haschar(str[i], charset) && str[i] != '\0')
			i++;
	}
	return (size);
}

char	**malloc_string(char **split, char *str, char *charset)
{
	int	i;
	int	size;
	int	j;

	i = 0;
	size = 0;
	j = 0;
	while (str[i] != '\0')
	{
		size = 0;
		while (ft_haschar(str[i], charset) && str[i] != '\0')
			i++;
		if (str[i] == '\0')
			break ;
		while (!ft_haschar(str[i], charset) && str[i] != '\0')
		{
			size++;
			i++;
		}
		split[j] = malloc(size + 1);
		j++;
	}
	return (split);
}

char	**copy_str(char **split, char *str, char *charset)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		k = 0;
		while (ft_haschar(str[i], charset) && str[i] != '\0')
			i++;
		if (str[i] == '\0')
			break ;
		while (!ft_haschar(str[i], charset) && str[i] != '\0')
		{
			split[j][k] = str[i];
			k++;
			i++;
		}
		split[j][k] = '\0';
		j++;
	}
	split[j] = 0;
	return (split);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		size;

	size = arr_size(str, charset);
	split = malloc((size + 1) * (sizeof(char *)));
	malloc_string(split, str, charset);
	copy_str(split, str, charset);
	return (split);
}
/*
int	main()
{
	char	*str = "ASD  __T Qwert _ _ yuip_";
	char	*sep = " _T";
	char	**split;
	int	i;

	split = ft_split(str, sep);
	i = 0;
	while (split[i] != 0)
	{
		printf("%s\n", split[i]);
		i++;
	}
}
*/
