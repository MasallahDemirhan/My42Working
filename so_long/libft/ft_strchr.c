/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mademirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:38:23 by mademirh          #+#    #+#             */
/*   Updated: 2022/02/14 17:38:37 by mademirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (const char)c)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == (const char)c)
		return ((char *)s + i);
	return (0);
}
/*
#include <stdio.h>

int main ()
{
    char str[] = "spordansonraesilaagrikesiciiciyor";
    printf("%s", ft_strchr(str,'e'));
    return (0);
}*/
