/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnkwelle <jnkwelle@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:05:20 by jnkwelle          #+#    #+#             */
/*   Updated: 2024/02/20 17:07:04 by jnkwelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *number1, int *number2)
{
	int	temp;

	temp = *number1;
	*number1 = *number2;
	*number2 = temp;
}