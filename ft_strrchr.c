
#include "libft.h"
#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *str, int c)
{
	char *h;
	char *o;
	int	i;
    int j;

	h = (char*)str;
	i = 0;
    j = 0;

	if (str[i] == 0)
		return NULL;

     
	while (h[j])
        j++;

        
	while (h[i] != '\0')
	{
		if (c == h[j])
			return (&h[j]);
		i++;
        j--;
	}
	return NULL;
}
int main(void)
{
	char o[] = "hello people";
	printf("%s\n", strrchr(o, 'p'));
	printf("%s\n", ft_strchr(o, 'p'));
}