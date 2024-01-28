/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellini <ebellini@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:33:35 by ebellini          #+#    #+#             */
/*   Updated: 2024/01/28 19:44:53 by ebellini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	totlen;

	if (!s1 || !s2)
		return (0);
	totlen = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * totlen + 1);
	if (!str)
		return (0);
	ft_strlcpy(str, s1, totlen + 1);
	ft_strlcat(str, s2, totlen + 1);
	return (str);
}
