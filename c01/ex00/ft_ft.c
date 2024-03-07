/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnkwelle <jnkwelle@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:00:45 by jnkwelle          #+#    #+#             */
/*   Updated: 2024/02/20 17:02:37 by jnkwelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_ft(char *nbr)
{
	*nbr = '4';
}

int main(int argc, char *argv[])
{
	if(argc < 2)
	{
			printf("We need two arguments at least");
		return 0;
	}
	ft_ft(argv[1]);
	printf("Number is now %s\n", argv[1]);
	return 0;
}
