#include "libft.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>

size_t ft_strlcpy(char *dst, const char *src, size_t n)
{
    unsigned int	i;
	unsigned int	len;
    char *a = (char*)src;

	i = 0;
	len = 0;
	while (a[len] != '\0')
	{
		len++;
	}
	if (n == 0)
	{
		return (len);
	}
	else if (n > 0)
	{
		while (a[i] != '\0' && i < (n - 1))
		{
			dst[i] = a[i];
			i++;
		}
	}
	dst[i] = '\0';
	return (len);
}
int main()
{
    char str1[] = "start hello";
    char str2[] = "chill";


    printf("%zu\n", ft_strlcpy(str1, str2, 0));
    printf("%s\n", str1);
}