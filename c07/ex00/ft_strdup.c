/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnkwelle <jnkwelle@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 09:57:24 by jnkwelle          #+#    #+#             */
/*   Updated: 2024/02/29 09:57:26 by jnkwelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_length(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*string_copy;

	string_copy = malloc(sizeof(char) * (get_length(src) + 1));
	i = 0;
	while (src[i] != '\0')
	{
		string_copy[i] = src[i];
		i++;
	}
	string_copy[i] = '\0';
	return (string_copy);
}
