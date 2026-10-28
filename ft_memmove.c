/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaalmoma <zaalmoma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 12:21:47 by zaalmoma          #+#    #+#             */
/*   Updated: 2026/09/14 14:12:58 by zaalmoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*dsttmp;
	unsigned char	*srctmp;
	size_t			i;

	dsttmp = (unsigned char *) dst;
	srctmp = (unsigned char *) src;
	i = 0;
	if (dsttmp > srctmp)
	{
		while (n-- > 0)
		{
			dsttmp[n] = srctmp[n];
		}
	}
	else
	{
		while (i < n)
		{
			dsttmp[i] = srctmp[i];
			i++;
		}
	}
	return (dst);
}
