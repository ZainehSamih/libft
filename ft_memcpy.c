/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaalmoma <zaalmoma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 15:33:59 by zaalmoma          #+#    #+#             */
/*   Updated: 2026/09/14 14:18:03 by zaalmoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dsttmp;
	unsigned char	*srctmp;

	dsttmp = (unsigned char *) dst;
	srctmp = (unsigned char *) src;
	while (n > 0)
	{
		*dsttmp = *srctmp;
		dsttmp++;
		srctmp++;
		n--;
	}
	return (dst);
}
