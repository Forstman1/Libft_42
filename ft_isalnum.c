
#include "libft.h"

int	ft_isisalnum(int a)
{
	return (48 <= a && a <= 57 
	|| 65 <= a && a <= 90 
	|| 97 <= a && a <= 122 );
}