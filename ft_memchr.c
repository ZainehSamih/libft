/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaalmoma <zaalmoma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 13:04:26 by zaalmoma          #+#    #+#             */
/*   Updated: 2026/09/14 14:17:21 by zaalmoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char			ch;
	const unsigned char		*ptr;
	size_t					i;

	ch = (unsigned char) c;
	ptr = s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == ch)
			return ((void *) &ptr[i]);
		i++;
	}
	return (NULL);
}
