/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mademirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 16:30:01 by mademirh          #+#    #+#             */
/*   Updated: 2022/02/14 15:32:25 by mademirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *f, size_t len)
{
	int		i;
	size_t	p;

	if (*f == '\0')
		return ((char *)s);
	p = ft_strlen((char *)f);
	while (*s != '\0' && len-- >= p)
	{
		i = 0;
		while (f[i] == s[i])
		{
			i++;
			if (f[i] == '\0')
				return ((char *)s);
		}
		s++;
	}
	return (0);
}
