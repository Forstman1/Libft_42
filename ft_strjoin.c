/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 08:50:56 by sahafid           #+#    #+#             */
/*   Updated: 2021/11/07 12:25:55 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*a;
	char	*b;
	char	*c;
	int		i;

	i = 0;
	a = (char *)s1;
	b = (char *)s2;
	if (!(s1) || !(s2))
		return NULL;
	c = (char *)malloc((strlen(a) + strlen(b) + 1) * 1);
	if (!c)
		return NULL;
	strcpy(c, a);
	strcat(c, b);
	//*c = '\0';
	return (c);
}
//int main(void)
//{
//    //char a[] = "hello";
//    //char b[] = "people";
//    printf("%s", ft_strjoin("tripouille", "42"));
//	free(ft_strjoin("tripouille", "42"));
//}
