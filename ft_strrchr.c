/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 10:15:39 by sahafid           #+#    #+#             */
/*   Updated: 2021/11/07 10:17:40 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *str, int c)
{
	char	*h;
	char	*o;
	int		i;
	int		j;

	h = (char *)str;
	i = 0;
	j = 0;
	if (str[i] == 0)
		return (NULL);
	while (h[j])
		j++;
	while (h[i] != '\0')
	{
		if (c == h[j])
			return (&h[j]);
		i++;
		j--;
	}
	return (NULL);
}
int main(void)
{
	char o[] = "hello people";
	printf("%s\n", strrchr(o, 'p'));
	printf("%s\n", ft_strrchr(o, 'p'));
}
