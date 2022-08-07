/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mademirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 11:51:06 by mademirh          #+#    #+#             */
/*   Updated: 2022/02/14 15:22:46 by mademirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(long n)
{
	long	i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nb)
{
	char	*s;
	long	i;
	long	n;

	n = nb;
	i = ft_len(n);
	s = (char *)malloc(sizeof(char) * (i + 1));
	if (!s)
		return (NULL);
	s[i--] = '\0';
	if (n == 0)
		s[0] = 48;
	if (n < 0)
	{
		n *= -1;
		s[0] = '-';
	}
	while (n > 0)
	{
		s[i] = 48 + (n % 10);
		n = n / 10;
		i--;
	}
	return (s);
}
/*#include <stdio.h>
int main()
{
	int n = -12453;
	char *f;
	f = ft_itoa(n);
	printf("%s", f);
}*/
