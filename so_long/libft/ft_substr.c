/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mademirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 12:49:52 by mademirh          #+#    #+#             */
/*   Updated: 2022/02/14 15:27:02 by mademirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;
	size_t	sz;

	if (!s)
		return (0);
	sz = ft_strlen(s);
	if (sz < start)
		return (ft_strdup(""));
	i = 0;
	if (len > sz)
		len = sz;
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (0);
	while (i < len)
	{
		dst[i++] = s[start++];
	}
	dst[i] = '\0';
	return (dst);
}
