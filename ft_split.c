/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellini <ebellini@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 21:56:01 by ebellini          #+#    #+#             */
/*   Updated: 2024/01/29 13:24:01 by ebellini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(const char *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static void	ft_freewords(char **words, size_t len)
{
	while (len > 0)
	{
		free(words[len]);
		len--;
	}
	free(words[len]);
	free(words);
}

static char	**ft_alloc_word(char **words, const char *s, char c, size_t len)
{
	size_t	j;
	size_t	i;

	j = 0;
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			j = 0;
			while (*s && *s != c && ++j)
				s++;
			words[i] = ft_substr(s - j, 0, j);
			if (!words[i])
			{
				ft_freewords(words, len);
				return (0);
			}
			i++;
		}
		else
			s++;
	}
	words[i] = 0;
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	len;

	if (!s)
		return (0);
	len = ft_count(s, c);
	words = (char **)malloc(sizeof(char *) * (len + 1));
	if (!words)
		return (0);
	if (!ft_alloc_word(words, s, c, len))
		return (0);
	return (words);
}
