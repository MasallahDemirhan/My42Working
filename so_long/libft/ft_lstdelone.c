/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mademirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 20:14:01 by mademirh          #+#    #+#             */
/*   Updated: 2022/02/16 20:15:35 by mademirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
#include <stdio.h>

void    ft_del(void *content)
{
    free(content);
    return ;
}

#include <stdio.h>
int main ()
{
	t_list *a;
	char *b = ft_strdup("alaladeins");
	a = ft_lstnew(b);
	printf("%s\n", a->content);
	ft_lstdelone(a, ft_del);
	if (a)
		printf("%s", "silindi");
    return (0);
}*/
