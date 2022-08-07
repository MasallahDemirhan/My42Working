/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mademirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:08:21 by mademirh          #+#    #+#             */
/*   Updated: 2022/02/16 18:27:27 by mademirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*r;

	r = (t_list *)malloc(sizeof(size_t));
	if (!r)
		return (NULL);
	r -> content = content;
	r -> next = NULL;
	return (r);
}
/*
#include <stdio.h>
int main(int ac, char **av)
{
	av++;
	if (ac > 1)
	{
		int i;

		i = 1;
		t_list *lst;
		while (*av)
		{
		lst = ft_lstnew(*(av++));
		printf("%s\n", lst->content);
		i++;
		}
	}
	return (0);
}*/	
