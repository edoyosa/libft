/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellini <ebellini@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:52:25 by ebellini          #+#    #+#             */
/*   Updated: 2024/01/29 18:41:56 by ebellini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_createnum(char *str, long n, size_t len, int sign)
{
	unsigned char	c;

	if (sign)
	{
		str[0] = '-';
		str[len + 1] = 0;
	}
	else
		str[len] = 0;
	while (len-- > 0)
	{
		c = 48 + (n % 10);
		str[len] = c;
		n /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	count;
	long	num;
	int		sign;

	sign = 0;
	num = (long)n;
	count = 0;
	if (n < 0)
	{
		sign = 1;
		num *= -1;
	}
	while (n / 10 != 0)
	{
		n /= 10;
		count++;
	}
	count++;
	str = (char *)malloc(count + sign + 1);
	if (!str)
		return (0);
	str = ft_createnum(str, num, count, sign);
	return (str);
}
