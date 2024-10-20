/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emansoor <emansoor@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:43:42 by emansoor          #+#    #+#             */
/*   Updated: 2024/07/24 15:22:40 by emansoor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
outputs character "c" to the given file descriptor
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
