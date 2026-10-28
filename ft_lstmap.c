/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaalmoma <zaalmoma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 15:56:19 by zaalmoma          #+#    #+#             */
/*   Updated: 2026/09/25 16:59:11 by zaalmoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	void	*new_content;
	t_list	*new_node;
	t_list	*new_list;

	tmp = lst;
	new_list = NULL;
	if (!lst)
		return (NULL);
	while (tmp)
	{
		new_content = (*f)(tmp -> content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			(*del)(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		tmp = tmp -> next;
	}
	return (new_list);
}
