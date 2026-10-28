/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaalmoma <zaalmoma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 09:23:26 by zaalmoma          #+#    #+#             */
/*   Updated: 2026/09/15 10:01:11 by zaalmoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	str;
	char	*ptr;

	str = ft_strlen(s);
	ptr = malloc(str + 1);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s, str + 1);
	return (ptr);
}
