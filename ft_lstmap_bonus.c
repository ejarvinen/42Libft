/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emansoor <emansoor@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 07:01:24 by emansoor          #+#    #+#             */
/*   Updated: 2024/07/24 15:20:35 by emansoor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*cleaner(t_list *lst, void *mod_content, void (*del)(void *))
{
	(*del)(mod_content);
	ft_lstclear(&lst, (*del));
	return (NULL);
}

/*
iterates through list 'lst' and applies function 'f' on the content of
each node
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*head;
	void	*mod_content;

	if (!lst)
		return (NULL);
	mod_content = (*f)(lst->content);
	head = ft_lstnew(mod_content);
	if (!head)
		return (cleaner(head, mod_content, (*del)));
	lst = lst->next;
	while (lst)
	{
		mod_content = (*f)(lst->content);
		new_node = ft_lstnew(mod_content);
		if (!new_node)
			return (cleaner(head, mod_content, (*del)));
		ft_lstadd_back(&head, new_node);
		lst = lst->next;
	}
	return (head);
}
