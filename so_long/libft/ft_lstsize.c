/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mademirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:51:11 by mademirh          #+#    #+#             */
/*   Updated: 2022/02/15 18:46:58 by mademirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int main()
{
	t_list *a,*b,*c;
	a = ft_lstnew("hi");
	b = ft_lstnew("hallo");
	c = ft_lstnew("hello");
	a->next = b;
	b->next = c;
	printf("%d", ft_lstsize(a));
}*/
