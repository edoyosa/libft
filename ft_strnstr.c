/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellini <ebellini@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 20:33:51 by ebellini          #+#    #+#             */
/*   Updated: 2024/01/31 15:18:58 by ebellini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;
	char	*result;

	i = 0;
	if (!(*needle))
		return ((char *)haystack);
	while (i < n && haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			j = 1;
			result = &((char *)haystack)[i];
			while (needle[j] && haystack[j + i] && j + i < n
				&& needle[j] == haystack[j + i])
				j++;
			if (!needle[j])
				return (result);
		}
		i++;
	}
	return (0);
}
