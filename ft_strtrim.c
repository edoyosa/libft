/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellini <ebellini@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:34:06 by ebellini          #+#    #+#             */
/*   Updated: 2024/01/28 21:54:04 by ebellini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		startstr;
	int		endstr;
	char	*str;

	if (!s1 || !set)
		return (0);
	startstr = 0;
	endstr = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[startstr]) && startstr <= endstr)
		startstr++;
	if (startstr > endstr)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[endstr]) && endstr >= 0)
		endstr--;
	str = (char *)malloc(sizeof(char) * (endstr - startstr + 2));
	if (!str)
		return (0);
	ft_strlcpy(str, s1 + startstr, endstr - startstr + 2);
	return (str);
}
