/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mademirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:01:08 by mademirh          #+#    #+#             */
/*   Updated: 2022/02/14 17:47:21 by mademirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	result;
	long	op;

	result = 0;
	op = 1;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		op *= -1;
		str++;
	}
	while (*str != '\0' && *str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - 48);
		if (result * op > 2147483647)
			return (-1);
		if (result * op < -2147483648)
			return (0);
		str++;
	}
	result *= op;
	return (result);
}
