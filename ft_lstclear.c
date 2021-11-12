/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 22:46:16 by sahafid           #+#    #+#             */
/*   Updated: 2021/11/12 22:46:17 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    while (lst != NULL)
    {
        lst = lst -> next;
        del(lst);
        free(lst);
    }
    *lst = NULL;
}