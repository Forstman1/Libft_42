
#include "libft.h"
#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *str, int c)
{
	char *h;
	char *o;
	int	i;

	h = (char*)str;
	i = 0;
	if (str[i] == 0)
		return NULL;
	
	while (h[i] != '\0')
	{
		if (c == h[i])
			return (&h[i]);
		i++;
	}
	return NULL;
}
int main(void)
{
	char o[] = "hello people";
	printf("%s\n", strchr(o, 'o'));
	printf("%s\n", ft_strchr(o, 'o'));
}