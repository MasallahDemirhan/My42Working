/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mademirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 11:37:43 by mademirh          #+#    #+#             */
/*   Updated: 2022/02/16 19:44:32 by mademirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*str;
	unsigned int	i;

	i = 0;
	str = (unsigned char *)s;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>
int	main()
{
	int a = 0;
	int i[]={1,1,1,7};
	ft_memset(i, 0, sizeof(int) * 4);

	while (a < 4) 
	{
		printf("%d\n", i[a]);
		a++;
	}
	
}*/
