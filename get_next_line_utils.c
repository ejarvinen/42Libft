/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emansoor <emansoor@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 13:20:25 by emansoor          #+#    #+#             */
/*   Updated: 2024/11/25 16:14:02 by emansoor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	newline_finder(char *buff, int size)
{
	int	index;

	index = 0;
	while (index < size)
	{
		if (buff[index] == 10)
			return (1);
		index++;
	}
	return (0);
}
