/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emansoor <emansoor@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 18:28:20 by emansoor          #+#    #+#             */
/*   Updated: 2024/07/24 15:14:27 by emansoor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
converts string pointed to by str to int representation
*/
int	ft_atoi(const char *str)
{
	long	nbr;
	int		sign;

	nbr = 0;
	sign = 1;
	while ((8 < *str && *str < 14) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		nbr = nbr * 10;
		nbr = nbr + (*str - 48);
		str++;
	}
	if (nbr >= MAX_INT && sign < 0)
		return (MAX_INT * sign - 1);
	if (nbr >= MAX_INT && sign > 0)
		return (MAX_INT * sign);
	return ((int)nbr * sign);
}
