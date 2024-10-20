/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emansoor <emansoor@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:33:15 by emansoor          #+#    #+#             */
/*   Updated: 2024/07/24 15:07:54 by emansoor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
converts the letter "chr" to lowercase if possible
*/
int	ft_tolower(int chr)
{
	if (64 < chr && chr < 91)
		return (chr + 32);
	else
		return (chr);
}
