/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnkwelle <jnkwelle@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:18:57 by jnkwelle          #+#    #+#             */
/*   Updated: 2024/02/20 17:20:54 by jnkwelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	*first_pointer;
	int	*last_pointer;
	int	temp;

	if (size < 2)
		return ;
	first_pointer = tab;
	last_pointer = tab + size - 1;
	while (first_pointer < last_pointer)
	{
		temp = *first_pointer;
		*first_pointer = *last_pointer;
		*last_pointer = temp;
		first_pointer++;
		last_pointer--;
	}
}
