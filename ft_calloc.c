/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellini <ebellini@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 00:10:11 by ebellini          #+#    #+#             */
/*   Updated: 2024/01/28 15:49:35 by ebellini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//DA RIVEDERE TEST 4 FRAU
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	int		length;

	if (size == SIZE_MAX || nmemb == SIZE_MAX)
		return (0);
	length = nmemb * size;
	if (length < 0)
		return (0);
	ptr = malloc(length);
	if (!ptr)
		return (0);
	ft_memset(ptr, 0, length);
	return (ptr);
}