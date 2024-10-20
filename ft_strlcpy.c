/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emansoor <emansoor@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:20:10 by emansoor          #+#    #+#             */
/*   Updated: 2024/07/24 15:27:02 by emansoor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
copies n - 1 characters from string "from" to string "to"
*/
size_t	ft_strlcpy(char *to, const char *from, size_t n)
{
	size_t	index;

	index = 0;
	if (n == 0)
		return (ft_strlen(from));
	while (from[index] && index < (n - 1))
	{
		to[index] = from[index];
		index++;
	}
	to[index] = '\0';
	return (ft_strlen(from));
}
