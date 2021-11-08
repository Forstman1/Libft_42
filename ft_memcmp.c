/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 10:23:05 by sahafid           #+#    #+#             */
/*   Updated: 2021/11/07 10:25:27 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t	i;
    unsigned char	*a;
	unsigned char	*b;	
		
	a = (unsigned char *)s1;
    b = (unsigned char *)s2;
    i = 0;

	if (n == 0)
		return (0);
	while ((a[i] == b[i]) && a[i] != '\0' && b[i] != '\0' && i < n - 1)
		i++;
	return (a[i] - b[i]);
}
int main(void)
{
	char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 0, 42, 0};
    printf("%d", memcmp(s2, s3, 4));
}
