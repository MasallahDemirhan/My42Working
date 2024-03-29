/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagirdem <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 12:47:02 by cagirdem          #+#    #+#             */
/*   Updated: 2022/02/16 19:22:33 by mademirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/*
#include <stdio.h>
 
int main()
{
	t_list *m,*a,*b,*c;
	a = ft_lstnew("hi");
	m = ft_lstnew("hallo");
	b = ft_lstnew("merhaba");
	c = ft_lstnew("bonjour");
	a->next = m;
	m->next = b;
	b->next = NULL;
	ft_lstadd_back(&a, c);
	printf("%s", b->next->content);
}
*/
