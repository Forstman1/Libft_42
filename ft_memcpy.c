/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 10:41:11 by sahafid           #+#    #+#             */
/*   Updated: 2021/11/07 10:44:02 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*a;
	char	*b;

	a = (char *)dst;
	b = (char *)src;
	i = 0;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	dst = a;
	return (dst);
}
int main()
{
    char str[] = "start hello";

    printf("%s\n", str);
    ft_memcpy(str, &str[6], 4 * sizeof(char));
    printf("%s\n", str);
}
