/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 10:33:35 by sahafid           #+#    #+#             */
/*   Updated: 2021/11/07 10:38:40 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *ptr, int i, size_t len)
{
	char	*c;
	size_t	a;
	size_t k;

	a = 0;
	c = ptr;
	k = strlen(c);
	while (a < len)
	{
		c[a] = (unsigned char) i;
		a++;
	}
	if (len > k)
		c[a] = '\0';
	ptr = c;
	return (ptr);
}
//int main(void)
//{
//    char o[100];
//	//printf("%s\n", memset(o, 'g', 10));
//	
//    printf("%s", ft_memset(o, 'A', 42));
//}
