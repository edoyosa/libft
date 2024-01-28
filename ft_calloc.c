/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellini <ebellini@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 00:10:11 by ebellini          #+#    #+#             */
/*   Updated: 2024/01/28 01:09:00 by ebellini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (!nmemb || !size || (size * nmemb) > 2147483424)
		return (0);
	ptr = (void *)malloc(size * nmemb);
	if (!ptr)
		return (0);
	ft_memset(ptr, 0, size * nmemb);
	return (ptr);
}
