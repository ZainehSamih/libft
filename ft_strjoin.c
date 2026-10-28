/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaalmoma <zaalmoma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 19:34:27 by zaalmoma          #+#    #+#             */
/*   Updated: 2026/09/17 20:07:11 by zaalmoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	flen;
	size_t	slen;
	size_t	comb;
	size_t	i;
	char	*str;

	flen = ft_strlen(s1);
	slen = ft_strlen(s2);
	comb = flen + slen;
	str = malloc(comb + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < comb)
	{
		if (i < flen)
			str[i] = s1[i];
		else
			str[i] = s2[i - flen];
		i++;
	}
	str[comb] = '\0';
	return (str);
}
