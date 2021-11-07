/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 10:25:39 by sahafid           #+#    #+#             */
/*   Updated: 2021/11/07 10:29:30 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	char	*a;

	a = (char *)str;
	i = 0;
	if (to_find[i] == '\0')
		return (a);
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while ((to_find[j] == '\0' || str[i + j] == to_find[j]) && i + j < len)
		{
			if (j >= len)
				return (0);
			if (to_find[j + 1] == '\0' && str[j + i] == to_find[j])
				return (&a[i]);
			j++;
		}
		i++;
	}
	return (0);
}
//int main(void)
//{
//    char haystack[30] = "aaabcabcd";
//    char needle[10] = "aabc";
//    char *empty = (char*)"";
//    printf("%s\n", strnstr(haystack, needle, 0));
//    printf("%s\n", strnstr(haystack, needle, -1));
//    printf("%s\n", strnstr(haystack, "a", -1));
//    printf("%s\n", strnstr(haystack, "c", -1));
//    printf("%s\n", strnstr(empty, "", -1));
//    printf("%s\n", strnstr(empty, "", 0));
//    printf("%s\n", strnstr(empty, "coucou", -1));
//    printf("%s\n", strnstr(haystack, "aaabc", 5));
//    printf("%s\n", strnstr(empty, "12345", 5));
//    printf("%s\n", strnstr(haystack, "abcd", 9));
//    printf("%s\n", strnstr(haystack, "cd", 8));
//    printf("%s\n", strnstr(haystack, "a", 1) );
//    printf("%s\n", strnstr("1", "a", 1) );
//    printf("%s\n", strnstr("22", "b", 2));
//
//    return (0);
//}
