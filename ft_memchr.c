
#include "libft.h"
#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t	i;
    char *a = (char*)s;

	i = 0;

	while (a[i] != '\0' && i < n)
	{
		if (a[i] == c)
		{
            return (&a[i]);
		}
		i++;
	}
	return (0);
}
int main(void)
{
    char *a = "hello people";

    printf("%s\n", ft_memchr(a, 'e', 10));
}
