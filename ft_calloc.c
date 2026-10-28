/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaalmoma <zaalmoma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 10:28:32 by zaalmoma          #+#    #+#             */
/*   Updated: 2026/10/02 16:26:19 by zaalmoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t s)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	if (count == 0 || s == 0)
		return (malloc(1));
	if (s > (size_t)-1 / count)
		return (NULL);
	tmp = malloc(count * s);
	if (!tmp)
		return (NULL);
	while (i < count * s)
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}
