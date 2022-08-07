/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mademirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:08:40 by mademirh          #+#    #+#             */
/*   Updated: 2022/02/02 17:29:29 by mademirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	if (!lst || !f)
		return (NULL);
	new = ft_lstnew(f(lst->content));
	if (new == 0)
	{
		del(&(lst->content));
		new = ft_lstmap(lst->next, f, del);
	}
	else
	{
		new->next = ft_lstmap(lst->next, f, del);
	}
	return (new);
}
