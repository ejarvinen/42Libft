/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emansoor <emansoor@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:24:38 by emansoor          #+#    #+#             */
/*   Updated: 2024/07/24 15:21:13 by emansoor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
returns the number of nodes in a linked list
*/
int	ft_lstsize(t_list *lst)
{
	int	nodes;

	nodes = 0;
	while (lst)
	{
		lst = lst->next;
		nodes++;
	}
	return (nodes);
}
