/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mademirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 11:10:07 by mademirh          #+#    #+#             */
/*   Updated: 2022/02/19 14:19:58 by mademirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_row(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i] != '\0' )
	{
		i++;
	}
	return (i);
}

size_t	ft_col(const char *s, char c)
{
	size_t	j;

	j = 0;
	while (*s != '\0')
	{
		if (*s != c && (s[1] == c || s[1] == '\0'))
			j++;
		s++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	t;
	char	**res;

	if (!s)
		return (NULL);
	t = ft_col(s, c);
	res = (char **)malloc(sizeof(char *) * t + 1);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < t)
	{
		while (*s == c && *s != '\0')
			s++;
		res[i] = (char *)malloc(sizeof(char) * ft_row(s, c) + 1);
		j = 0;
		while (*s != 0 && *s != c)
			res[i][j++] = *s++;
		res[i][j] = '\0';
		i++;
	}
	res[i] = NULL;
	return (res);
}
