/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnkwelle <jnkwelle@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:21:52 by jnkwelle          #+#    #+#             */
/*   Updated: 2024/02/20 16:23:33 by jnkwelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!((str[index] >= '0' && str[index] <= '9')))
			return (0);
		index++;
	}
	if (index < 1)
	{
		return (1);
	}
	return (1);
}
