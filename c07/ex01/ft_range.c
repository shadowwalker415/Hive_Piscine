/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnkwelle <jnkwelle@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 10:52:03 by jnkwelle          #+#    #+#             */
/*   Updated: 2024/02/29 10:52:06 by jnkwelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*numbers_range;
	int	i;

	if (min >= max)
		return (NULL);
	i = 0;
	numbers_range = malloc(sizeof(int) * (max - min));
	if (!numbers_range)
		return (NULL);
	while (min < max)
	{
		numbers_range[i] = min;
		i++;
		min++;
	}
	return (numbers_range);
}
