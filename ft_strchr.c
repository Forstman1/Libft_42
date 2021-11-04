
#include "libft.h"
#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *str, int c)
{
	char *h;
	int	i;
	char a;

	h = (char*)str;
	i = 0;
	a = (char)c;

	if (str[i] == 0)
		return NULL;
	
	while (h[i] != '\0')
	{
		if (a == h[i])
			return (&h[i]);
		i++;
	}
	if (c == 0)
		return (&h[i]);
	return 0;
}
int main(void)
{
    char s[] = "hello";
     printf("%s\n", strchr(s, 't'));
	 printf("%s\n", ft_strchr(s, 't'));
     printf("%s\n", strchr(s, 'l'));
	 printf("%s\n", ft_strchr(s, 'l'));
     printf("%s\n", strchr(s, 'z'));
	 printf("%s\n", ft_strchr(s, 'z'));
     printf("%s\n", strchr(s, 0));
	 printf("%s\n", ft_strchr(s, 0));
     printf("%s\n", strchr(s, 'e' + 256));
	 printf("%s\n", ft_strchr(s, 'e' + 256));
    return (0);
}