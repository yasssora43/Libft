/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhindou <ykhindou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:57:57 by ykhindou          #+#    #+#             */
/*   Updated: 2024/11/02 18:57:57 by ykhindou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*node;

	if(lst == NULL || f == NULL || del == NULL)
		return (NULL);
	while(lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
				ft_lstclear(&node, del);
				free(node);
		}
		ft_lstadd_back(&head, node);
		lst = lst->next;
	}
	return (head);
}
