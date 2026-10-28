/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaalmoma <zaalmoma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 14:02:03 by zaalmoma          #+#    #+#             */
/*   Updated: 2026/09/14 14:20:16 by zaalmoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (n == 0)
		return (srclen);
	else if (n >= srclen + 1)
		ft_memcpy(dst, src, srclen + 1);
	else
	{
		ft_memcpy(dst, src, n - 1);
		dst[n - 1] = '\0';
	}
	return (srclen);
}
