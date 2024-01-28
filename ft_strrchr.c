/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellini <ebellini@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:49:17 by ebellini          #+#    #+#             */
/*   Updated: 2024/01/27 17:12:39 by ebellini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*temp;

	temp = 0;
	while (*s)
	{
		if (*s == c)
			temp = (char *)s;
		s++;
	}
	if (!c)
		temp = (char *)s;
	if (!temp)
		return (0);
	return (temp);
}
