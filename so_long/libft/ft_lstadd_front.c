/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mademirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:18:08 by mademirh          #+#    #+#             */
/*   Updated: 2022/02/15 18:25:50 by mademirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
}
/*
#include <stdio.h>
int main()
{
	t_list *mainlist, *tmp;
	mainlist = ft_lstnew("hi");

	ft_lstadd_front(&mainlist, ft_lstnew("guys"));
	while (mainlist)
	{
		printf("%s", mainlist->content);
		mainlist = mainlist->next;
	
	}
	
}*/
