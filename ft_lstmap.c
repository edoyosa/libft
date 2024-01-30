/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellini <ebellini@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 21:34:27 by ebellini          #+#    #+#             */
/*   Updated: 2024/01/30 22:05:40 by ebellini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del) (void *))
{
	t_list	*list;
	t_list	*nodelist;

	if (!lst || !f || !del)
		return (0);
	list = (0);
	while (lst)
	{
		nodelist = ft_lstnew(f(lst->content));
		if (!nodelist)
		{
			ft_lstclear(&lst, del);
			return (0);
		}
		ft_lstadd_back(&list, nodelist);
		lst = lst->next;
	}
	ft_lstclear(&lst, del);
	return (list);
}
