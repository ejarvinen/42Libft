/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emansoor <emansoor@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:26:24 by emansoor          #+#    #+#             */
/*   Updated: 2024/07/24 15:37:26 by emansoor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
calculates the length of the string "str"
*/
size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	if (str)
	{
		while (str[len])
			len++;
	}
	return (len);
}
