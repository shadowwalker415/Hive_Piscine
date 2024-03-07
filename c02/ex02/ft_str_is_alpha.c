/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnkwelle <jnkwelle@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:18:57 by jnkwelle          #+#    #+#             */
/*   Updated: 2024/02/20 16:20:41 by jnkwelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if ((str[index] < 'a' || str[index] > 'z')
			&& (str[index] < 'A' || str[index] > 'Z'))
			return (0);
		index++;
	}
	if (index < 1)
	{
		return (1);
	}
	return (1);
}
