/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnkwelle <jnkwelle@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 21:14:56 by jnkwelle          #+#    #+#             */
/*   Updated: 2024/02/27 21:14:58 by jnkwelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	square_root;

	if (nb == 1)
		return (1);
	i = 0;
	while (i < nb && i < 46341)
	{
		if (i * i == nb)
		{
			square_root = i;
			return (square_root);
		}
		i++;
	}
	return (0);
}
