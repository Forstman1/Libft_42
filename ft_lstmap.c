/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 18:17:47 by sahafid           #+#    #+#             */
/*   Updated: 2021/11/13 18:17:48 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *root, *tmp;

	root = (t_list*)malloc(sizeof(ft_lstsize(lst)));
	tmp = root;
	if(!(root))
	{
		ft_lstclear(&root, del);
		free(root);
		return (lst);
	}
	while (lst != NULL)
	{
		root = lst;
		f(root);
		root = ft_lstnew(root->content);
		if(!(root))
		{
			ft_lstclear(&tmp, del);
			free(tmp);
			return (lst);
		}
		root = root->next;
		lst = lst->next;
	}
	free(root);
	return (root);
}