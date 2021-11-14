/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 12:14:48 by sahafid           #+#    #+#             */
/*   Updated: 2021/11/07 12:17:13 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*b;
	char	*c;
	int		i;

	i = 0;
	b = (char *)s1;
	while (s1[i])
		i++;
	c = (char *)malloc((i + 1) * sizeof(char));
	if (!c)
		return 0;
	i = 0;
	while (b[i])
	{
		c[i] = b[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}
