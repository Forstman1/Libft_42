/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 10:47:13 by sahafid           #+#    #+#             */
/*   Updated: 2021/11/07 11:11:45 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*a;
	char	*b;
	char	*c;

	a = (char *)dst;
	b = (char *)src;
	c = (char *)malloc(sizeof(char) * (n + 1));
	i = 0;
	while (i < n)
	{
		c[i] = b[i];
		i++;
	}
	i = 0;
	while (a[i] == b[i])
	{
		i++;
		if (i > n)
		{
			free (c);	
			return (a);
		}
	}
	i = 0;
	if (a < b)
		memcpy(a, b, n);
	else if (a > b)
	{
		while (i < n)
		{
			a[i] = c[i];
			i++;
		}
	}
	free (c);
	return (dst);
}
//int main()
//{
//    //char str1[] = "haw are mr amine";
//    char str1[] = "start hellosfsfs";
//    printf("%s", ft_memmove(str1, str1, 0));
//}
