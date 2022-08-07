/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mademirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:43:49 by mademirh          #+#    #+#             */
/*   Updated: 2022/02/16 18:55:48 by mademirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst)
	{
		while (lst -> next != NULL)
			lst = lst -> next;
		return (lst);
	}
	else
		return (NULL);
}
/*
#include <stdio.h>

int main(int ac, char **av)
{
	if (ac == 8)
	{
		int i = 0;
		t_list *lst, *frt, *bck;
			lst = ft_lstnew(av[1]);
			i = 2;
			while (i < 5)
			{
				frt = ft_lstnew(av[i]);
				ft_lstadd_front(&lst, frt);
				i++;
			}
			i = 5;
			while (i < 8)
			{
				bck = ft_lstnew(av[i]);
				ft_lstadd_back(&lst, bck);
				i++;
			}
			i = 1;
			while (lst)
			{
				printf("%d elman\t %s\n",i , lst->content);
				lst = lst->next;
				i++;
			}
	}
	return (0);
}*/
