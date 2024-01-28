/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellini <ebellini@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 21:56:01 by ebellini          #+#    #+#             */
/*   Updated: 2024/01/28 22:56:34 by ebellini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countwords(const char *s, char c)
{
	size_t	count;
	size_t	z;

	z = 0;
	count = 0;
	while (s[z] == c)
		z++;
	while (s[z])
	{
		if (s[z] != c)
		{
			count++;
			while (s[z] && s[z] != c)
				z++;
		}
		else
			z++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	i;
	size_t	j;

	if (!s)
		return (0);
	i = 0;
	words = (char **)malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!words)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			j = 0;
			while (*s && *s != c && ++j)
				s++;
			words[i++] = ft_substr(s - j, 0, j);
		}
		else
			s++;
	}
	words[i] = 0;
	return (words);
}
