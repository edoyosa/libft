/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellini <ebellini@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 00:10:11 by ebellini          #+#    #+#             */
/*   Updated: 2024/01/29 15:02:32 by ebellini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	length;

	if (size == 0 || nmemb == 0)
		return (0);
	if (SIZE_MAX / nmemb < size)
		return (0);
	length = nmemb * size;
	ptr = malloc(length);
	if (!ptr)
		return (0);
	ft_memset(ptr, 0, length);
	return (ptr);
}
