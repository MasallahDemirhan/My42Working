/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mademirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 23:51:42 by mademirh          #+#    #+#             */
/*   Updated: 2022/02/15 18:00:34 by mademirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
/*
void f(unsigned int i, char *a)
{
	i = 0;
	while (a[i])
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;
		i++;
	}
}

#include <stdio.h>

int main()
{
	char a[] = "alalade";
	ft_striteri(a, f);
	printf("%s",a);
}*/
