
#include "libft.h"
#include <string.h>
#include <stdio.h>

char *ft_strnstr(const char *str, const char *to_find, size_t len)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (to_find[j] == '\0' || str[i + j] == to_find[j])
		{
            if (j >= len)
                return 0;
		    if (to_find[j] == '\0')
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
int main(void)
{
    char *a = "hello people";
    char *b = "ell";
    printf("%s\n", ft_strnstr(a, b, 3));
}