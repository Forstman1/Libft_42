#include "libft.h"
#include <stdio.h>

int	main(void)
{
    printf("%s\n", ft_strtrim("   xxxtripouille", " x"));
    free(ft_strtrim("   xxxtripouille", " x"));
    printf("%s\n", ft_strtrim("tripouille   xxx", " x"));
    free(ft_strtrim("   xxxtripouille", " x"));
    printf("%s\n", ft_strtrim("   xxxtripouille   xxx", " x"));
    free(ft_strtrim("   xxxtripouille", " x"));
    printf("%s\n", ft_strtrim("   xxx   xxx", " x"));
    printf("%s\n", ft_strtrim("", "123"));
    printf("%s\n", ft_strtrim("123", ""));
    printf("%s\n", ft_strtrim("", ""));
    printf("%s\n", ft_strtrim("abcdba", "acb"));
    return (0);
}