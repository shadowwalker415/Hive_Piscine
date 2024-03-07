/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnkwelle <jnkwelle@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:41:11 by jnkwelle          #+#    #+#             */
/*   Updated: 2024/02/20 16:43:11 by jnkwelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!((str[index] >= 'A' && str[index] <= 'Z')))
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
