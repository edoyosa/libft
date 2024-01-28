/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellini <ebellini@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:59:52 by ebellini          #+#    #+#             */
/*   Updated: 2024/01/28 15:24:55 by ebellini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		len;

	len = ft_strlen(s);
	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	str[len] = '\0';
	while (len-- > 0)
	{
		str[len] = s[len];
	}
	return (str);
}
