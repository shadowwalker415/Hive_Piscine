/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnkwelle <jnkwelle@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:28:37 by jnkwelle          #+#    #+#             */
/*   Updated: 2024/02/27 16:28:39 by jnkwelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	i = 2;
	result = nb;
	while (power >= i)
	{
		result *= nb;
		i++;
	}
	return (result);
}
