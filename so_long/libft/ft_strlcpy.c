/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mademirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:12:58 by mademirh          #+#    #+#             */
/*   Updated: 2022/01/12 15:20:11 by mademirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsz)
{
	size_t	i;
	size_t	ssz;

	ssz = ft_strlen(src);
	if (!dst || !src)
		return (0);
	i = 0;
	if (dsz != 0)
	{
		while (src[i] != '\0' && i < (dsz -1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ssz);
}
