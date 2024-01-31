/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellini <ebellini@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 00:10:11 by ebellini          #+#    #+#             */
/*   Updated: 2024/01/31 17:55:33 by ebellini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	length;

	if (!size || !nmemb)
	{
		ptr = malloc(1);
		if (!ptr)
			return (0);
		length = 1;
	}
	else
	{
		if (UINT_MAX / nmemb < size || SIZE_MAX / nmemb < size)
			return (0);
		length = nmemb * size;
		ptr = malloc(length);
		if (!ptr)
			return (0);
	}
	ft_bzero(ptr, length);
	return (ptr);
}
