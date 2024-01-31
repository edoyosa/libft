/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellini <ebellini@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 22:34:31 by ebellini          #+#    #+#             */
/*   Updated: 2024/01/31 15:39:35 by ebellini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	i;
	size_t	srclen;

	i = 0;
	if (size == 0)
	{
		srclen = ft_strlen(src);
		return (srclen);
	}
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	while ((i + dstlen) < (size - 1) && src[i])
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	if (dstlen < size)
		dst[dstlen + i] = '\0';
	else
		return (srclen + size);
	return (dstlen + srclen);
}
