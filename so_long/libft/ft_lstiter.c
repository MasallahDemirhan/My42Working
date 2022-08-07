/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mademirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:05:33 by mademirh          #+#    #+#             */
/*   Updated: 2022/02/16 19:24:07 by mademirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void pstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int main()
{
	t_list *lst;
	lst = NULL;
	ft_lstadd_back(&lst, ft_lstnew("masallah"));
	ft_lstiter(lst,pstr);
}*/
