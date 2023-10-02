/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igaguila <igaguila@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 21:05:31 by igaguila          #+#    #+#             */
/*   Updated: 2023/09/30 17:55:38 by igaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*newlist;

	newlist = NULL;
	while (lst != 0)
	{
		node = ft_lstnew(0);
		if (!node)
		{
			ft_lstclear(&newlist, del);
			return (0);
		}
		node->content = f(lst->content);
		ft_lstadd_back(&newlist, node);
		lst = lst->next;
	}
	return (newlist);
}
