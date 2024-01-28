/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellini <ebellini@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:30:41 by ebellini          #+#    #+#             */
/*   Updated: 2024/01/28 17:02:40 by ebellini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	unsigned int	slength;

	i = 0;
	slength = ft_strlen(s);
	if (!s)
		return (0);
	if (start >= slength)
		str = ft_strdup("");
	else if(len < slength - start)
		str = (char *)malloc(sizeof(*s) * (len + 1));
	else
		str = (char *)malloc(sizeof(*s) * (slength - start));
	if (!str)
		return (0);
	while (s[i + start])
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
}
