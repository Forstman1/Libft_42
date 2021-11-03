#include "libft.h"
#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    char *a = (char*)s1;
    char *b = (char*)s2;
    i = 0;

	if (n == 0)
	{
		return (0);
	}
	while ((a[i] == b[i]) && a[i] != '\0' && b[i] != '\0' && i < n - 1)
	{
		i++;
	}
	return ((unsigned char)a[i] - (unsigned char)b[i]);
}
int main(void)
{
    char arr1[] = "heelo";
    char arr2[] = "heeyo";
    printf("%d", memcmp(arr1, arr2, 2));
}