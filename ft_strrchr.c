/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaalmoma <zaalmoma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 10:59:47 by zaalmoma          #+#    #+#             */
/*   Updated: 2026/09/28 08:21:35 by zaalmoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t			len;
	unsigned char	ch;

	ch = (unsigned char) c;
	len = ft_strlen(str);
	if (ch == '\0')
		return ((char *) &str[len]);
	while (len > 0)
	{
		len--;
		if (str[len] == ch)
			return ((char *) &str[len]);
	}
	return (NULL);
}
