#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	size_src;

	size_src = ft_strlen(src);
	i = 0;
	if (size < 1)
		return size_src;
	while (i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (size_src);
}

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Hello World!";
    char str2[] = "GfG";
    char str3[40];

    ft_strlcpy(str2, str1, 13);
    ft_strlcpy(str3, "ciao", 0);
    printf("str1: %s\nstr2: %s\nstr3: %s", str1, str2, str3);
    return 0;
}
