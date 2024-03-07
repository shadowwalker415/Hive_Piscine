/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnkwelle <jnkwelle@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:25:47 by jnkwelle          #+#    #+#             */
/*   Updated: 2024/02/22 14:25:52 by jnkwelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	diff;

	i = 0;
	while (i < n)
	{
		diff = s1[i] - s2[i];
		if (diff != 0 || s1[i] == '\0')
		{
			return (diff);
		}
		i++;
	}
	return (0);
}
