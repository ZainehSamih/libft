/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaalmoma <zaalmoma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 16:13:51 by zaalmoma          #+#    #+#             */
/*   Updated: 2026/09/21 13:04:21 by zaalmoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	num_length(int n)
{
	int		count;
	long	number;

	count = 0;
	number = n;
	if (number < 0)
	{
		count++;
		number *= -1;
	}
	if (number == 0)
		count++;
	while (number > 0)
	{
		number = number / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	size_t	len;
	size_t	i;
	char	*res;
	long	number;

	len = num_length(n);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	number = n;
	i = len;
	res[i] = '\0';
	if (number < 0)
		number *= -1;
	if (number == 0)
		res[i - 1] = '0';
	while (number > 0)
	{
		i--;
		res[i] = (number % 10) + '0';
		number = number / 10;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}
