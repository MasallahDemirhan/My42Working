/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mademirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:21:33 by mademirh          #+#    #+#             */
/*   Updated: 2022/02/14 19:47:35 by mademirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ss;
	unsigned char	i;
	unsigned char	tc;

	ss = (unsigned char *)s;
	tc = (unsigned char )c;
	i = 0;
	while (n--)
	{
		if (ss[i] == tc)
			return (&ss[i]);
		i++;
	}
	return (0);
}
