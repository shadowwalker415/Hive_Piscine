/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnkwelle <jnkwelle@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:30:05 by jnkwelle          #+#    #+#             */
/*   Updated: 2024/03/05 17:30:09 by jnkwelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

char	*str_dup(char *src)
{
	char	*duplicate;
	int		i;
	int		j;

	i = 0;
	while (src[i])
	{
		i++;
	}
	duplicate = malloc(i * (sizeof(char) + 1));
	if (!duplicate)
		return (NULL);
	j = 0;
	while (src[j])
	{
		duplicate[j] = src[j];
		j++;
	}
	duplicate[j] = '\0';
	return (duplicate);
}

char	str_len(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	t_stock_str			*strs_tab;

	if (ac < 1)
		return (NULL);
	strs_tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!strs_tab)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		strs_tab[i].size = str_len(av[i]);
		strs_tab[i].str = av[i];
		strs_tab[i].copy = str_dup(av[i]);
		i++;
	}
	strs_tab[i].str = "\0";
	return (strs_tab);
}
