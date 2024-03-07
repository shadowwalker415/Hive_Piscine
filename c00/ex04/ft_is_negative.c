/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnkwelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:30:26 by jnkwelle          #+#    #+#             */
/*   Updated: 2024/02/15 19:38:02 by jnkwelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int number)
{
	char	letter;

	if (number >= 0)
	{
		letter = 'P';
		write(1, &letter, 1);
	}
	else
	{
		letter = 'N';
		write(1, &letter, 1);
	}
}
