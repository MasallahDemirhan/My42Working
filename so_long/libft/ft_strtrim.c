/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mademirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 17:48:32 by mademirh          #+#    #+#             */
/*   Updated: 2022/02/14 15:29:21 by mademirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*dst;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
			s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	dst = ft_substr(s1, 0, i + 1);
	return (dst);
}
