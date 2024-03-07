/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnkwelle <jnkwelle@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:55:11 by jnkwelle          #+#    #+#             */
/*   Updated: 2024/03/05 15:55:15 by jnkwelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

int	convert_negative(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	else
		return (nbr);
}

# define ABS(value) (convert_negative(value))

#endif
