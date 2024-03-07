/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnkwelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:38:11 by jnkwelle          #+#    #+#             */
/*   Updated: 2024/02/15 19:41:18 by jnkwelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)

{
	char	first_character;
	char	last_character;

	first_character = 'a';
	last_character = 'z';
	while (last_character >= first_character)
	{
		write(1, &last_character, 1);
		last_character--;
	}
}
