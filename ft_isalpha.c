

#include "libft.h"

int	ft_isalpha(int a)
{
	return ((65 <= a && a <= 90) 
	|| (97 <= a && a <= 122) );
}
