/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnkwelle <jnkwelle@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:41:59 by jnkwelle          #+#    #+#             */
/*   Updated: 2024/03/04 12:42:05 by jnkwelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_allocate(int size, char **strs, char *sep)
{
	int		length;
	int		i;
	char	*new_string;

	length = 0;
	i = 0;
	while (i < size)
	{
		length = length + ft_strlen(strs[i]);
		i++;
	}
	length = length + ft_strlen(sep) * (size - 1);
	if (size <= 0)
	{
		length = 1;
	}
	new_string = (char *)malloc(sizeof(char) * length);
	return (new_string);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new_string;
	int		strings_index;
	int		main_index;
	int		j;

	strings_index = -1;
	main_index = 0;
	new_string = ft_allocate(size, strs, sep);
	while (++strings_index < size)
	{
		j = 0;
		while (strs[strings_index][j] != '\0')
		{
			new_string[main_index++] = strs[strings_index][j];
			j++;
		}
		j = 0;
		while (sep[j] != '\0' && strings_index != (size - 1))
		{
			new_string[main_index++] = sep[j];
			j++;
		}
	}
	new_string[main_index] = '\0';
	return (new_string);
}
