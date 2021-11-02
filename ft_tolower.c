
#include "libft.h"


int ft_tolower(int a)
{
    while(65 <= a && a <= 90)
       return(a + 32);
    return (a);
}