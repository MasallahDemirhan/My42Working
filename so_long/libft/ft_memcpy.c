/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mademirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 12:54:05 by mademirh          #+#    #+#             */
/*   Updated: 2022/02/14 15:43:56 by mademirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;

	if (!n || src == dst)
		return (dst);
	d = dst;
	s = (char *)src;
	while (n--)
		*d++ = *s++;
	return (dst);
}
