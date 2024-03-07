/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnkwelle <jnkwelle@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:36:59 by jnkwelle          #+#    #+#             */
/*   Updated: 2024/02/20 16:38:43 by jnkwelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!((str[index] >= 'a' && str[index] <= 'z')))
		{
			return (0);
		}
		else
			index++;
	}
	if (index < 1)
		return (1);
	return (1);
}
