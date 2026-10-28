/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaalmoma <zaalmoma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 10:06:05 by zaalmoma          #+#    #+#             */
/*   Updated: 2026/09/28 08:18:40 by zaalmoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned int	i;
	unsigned char	ch;

	ch = (unsigned char) c;
	i = 0;
	while (str[i])
	{
		if (str[i] == ch)
			return ((char *) &str[i]);
		i++;
	}
	if (ch == '\0')
		return ((char *) &str[i]);
	return (NULL);
}
