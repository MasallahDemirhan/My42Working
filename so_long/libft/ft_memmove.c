/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mademirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:41:09 by mademirh          #+#    #+#             */
/*   Updated: 2022/02/14 15:41:29 by mademirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	char	*lastd;
	char	*lasts;

	if (!len || src == dst)
		return (dst);
	d = (char *)dst;
	s = (char *)src;
	if (d < s)
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		lastd = (char *)(d + (len - 1));
		lasts = (char *)(s + (len - 1));
		while (len--)
			*lastd-- = *lasts--;
	}
	return (dst);
}
