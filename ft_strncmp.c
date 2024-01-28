/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellini <ebellini@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:16:01 by ebellini          #+#    #+#             */
/*   Updated: 2024/01/27 20:32:29 by ebellini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!n)
		return (0);
	while (n > 0 && *s1 && *s2 && *s1 == *s2)
	{
		if (--n)
		{
			s1++;
			s2++;
		}
	}
	return ((unsigned char)*s1 - *s2);
}
