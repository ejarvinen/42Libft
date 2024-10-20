/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emansoor <emansoor@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:08:33 by emansoor          #+#    #+#             */
/*   Updated: 2024/07/24 15:17:41 by emansoor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
tests for a decimal digit character
*/
int	ft_isdigit(int c)
{
	if ((47 < c) && (c < 58))
		return (1);
	return (0);
}
