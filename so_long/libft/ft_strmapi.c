/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mademirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 22:54:28 by mademirh          #+#    #+#             */
/*   Updated: 2022/02/15 17:43:51 by mademirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char f(unsigned int i, char a)
{
	a = a - 32;
	return (a);
}

#include <stdio.h>

int main()
{
	char *a;
	a = "alalade";
	char *b;
	b = ft_strmapi(a, f);
	printf("%s",b);
}*/
