/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaalmoma <zaalmoma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 12:22:25 by zaalmoma          #+#    #+#             */
/*   Updated: 2026/09/14 14:18:16 by zaalmoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *) b;
	while (n > 0)
	{
		*tmp = (unsigned char) c;
		tmp++;
		n--;
	}
	return (b);
}
