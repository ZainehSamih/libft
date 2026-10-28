/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaalmoma <zaalmoma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 18:22:31 by zaalmoma          #+#    #+#             */
/*   Updated: 2026/09/24 18:59:53 by zaalmoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp1;
	t_list	*tmp2;

	tmp1 = *lst;
	if (!tmp1)
		return ;
	while (tmp1)
	{
		tmp2 = tmp1 -> next;
		ft_lstdelone(tmp1, del);
		tmp1 = tmp2;
	}
	*lst = NULL;
}
