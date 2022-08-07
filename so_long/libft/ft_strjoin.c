/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mademirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 17:12:55 by mademirh          #+#    #+#             */
/*   Updated: 2022/02/14 15:31:39 by mademirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i1;
	int		i2;
	char	*join;

	if (!s1 || !s2)
		return (0);
	join = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	i1 = 0;
	i2 = 0;
	if (!join)
		return (0);
	while (s1[i1] != '\0')
	{
		join[i1] = s1[i1];
		i1++;
	}
	while (s2[i2] != '\0')
	{
		join[i1 + i2] = s2[i2];
		i2++;
	}
	join[i1 + i2] = '\0';
	return (join);
}
