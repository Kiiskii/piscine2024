/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akiiski <akiiski@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:37:57 by akiiski           #+#    #+#             */
/*   Updated: 2024/08/20 09:52:31 by akiiski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (*str)
	{
		c++;
		str++;
	}
	return (c);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		length;
	int		i;

	i = 0;
	length = ft_strlen(src);
	dest = (char *)malloc((length + 1) * sizeof(char));
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

int	ft_free(struct s_stock_str *ps, int fail_index)
{
	int	i;

	i = 0;
	while (i < fail_index)
	{
		free(ps[i].copy);
		i++;
	}
	free(ps);
	return (0);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*ps;
	int			i;

	i = 0;
	ps = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (ps == NULL)
		return (NULL);
	while (i < ac)
	{
		ps[i].size = ft_strlen(av[i]);
		ps[i].str = av[i];
		ps[i].copy = ft_strdup(av[i]);
		if (ps[i].copy == 0)
		{
			ft_free(ps, i);
			return (0);
		}
		i++;
	}
	ps[i].str = 0;
	return (ps);
}
