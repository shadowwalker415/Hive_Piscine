/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnkwelle <jnkwelle@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:21:12 by jnkwelle          #+#    #+#             */
/*   Updated: 2024/02/28 14:21:14 by jnkwelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	start;
	int	end;

	if (argc < 2)
		return (0);
	start = 0;
	end = argc -1;
	while (start < end)
	{
		ft_print_params(argv[end]);
		end--;
	}
	return (0);
}
