/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnkwelle <jnkwelle@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 21:25:31 by jnkwelle          #+#    #+#             */
/*   Updated: 2024/02/26 21:25:36 by jnkwelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	number;
	int	sign;
	int	i;

	number = 0;
	sign = 0;
	i = 0;
	while (str[i] != '\0' && !((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z') ))
	{
		if (str[i] == '-')
		{
			sign++;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			number = (number * 10) + str[i] - '0';
		}
		i++;
	}
	if (sign % 2 == 0)
		return (number);
	return (-number);
}
