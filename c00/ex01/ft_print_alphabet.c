/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnkwelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:12:17 by jnkwelle          #+#    #+#             */
/*   Updated: 2024/02/15 19:42:31 by jnkwelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)

{
	char	first_letter;
	char	last_letter;

	first_letter = 'a';
	last_letter = 'z';
	while (first_letter <= last_letter)
	{
		write(1, &first_letter, 1);
		first_letter++;
	}
}
