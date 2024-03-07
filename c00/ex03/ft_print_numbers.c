/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnkwelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:15:15 by jnkwelle          #+#    #+#             */
/*   Updated: 2024/02/15 19:46:55 by jnkwelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)

{
	char	first_number;
	char	last_number;

	first_number = '0';
	last_number = '9';
	while (first_number <= last_number)
	{
		write(1, &first_number, 1);
		first_number++;
	}
}
