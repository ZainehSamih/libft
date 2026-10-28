/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaalmoma <zaalmoma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 11:51:31 by zaalmoma          #+#    #+#             */
/*   Updated: 2026/09/21 13:04:56 by zaalmoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	words_count(char const *s, char delimiter)
{
	size_t	words;

	words = 0;
	while (*s)
	{
		while (*s == delimiter && *s)
			s++;
		if (*s)
			words++;
		while (*s != delimiter && *s)
			s++;
	}
	return (words);
}

static void	free_split(char **result, size_t i)
{
	size_t	j;

	j = 0;
	while (j < i)
	{
		free(result[j]);
		j++;
	}
	free(result);
}

static char	*get_word(const char **ptr, char c)
{
	const char	*word_start;
	size_t		len;

	while (**ptr == c)
		(*ptr)++;
	word_start = *ptr;
	while (**ptr && **ptr != c)
		(*ptr)++;
	len = *ptr - word_start;
	return (ft_substr(word_start, 0, len));
}

static char	**split_alloc(size_t words)
{
	char	**result;

	result = malloc((words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result[words] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char		**result;
	size_t		words;
	size_t		i;
	const char	*ptr;

	if (!s)
		return (NULL);
	words = words_count(s, c);
	result = split_alloc(words);
	if (!result)
		return (NULL);
	i = 0;
	ptr = s;
	while (i < words)
	{
		result[i] = get_word(&ptr, c);
		if (!result[i])
		{
			free_split(result, i);
			return (NULL);
		}
		i++;
	}
	return (result);
}
