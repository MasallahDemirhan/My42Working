/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mademirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 08:54:26 by mademirh          #+#    #+#             */
/*   Updated: 2022/01/22 15:21:05 by mademirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putstr_fd("2147483648", fd);
	}
	else
	{
		if (n < 0)
		{
			n *= -1;
			ft_putchar_fd('-', fd);
		}
		if (n > 9)
		{
			ft_putnbr_fd((n / 10), fd);
		}
		ft_putchar_fd(48 + (n % 10), fd);
	}
}
/*
int main()
{
	ft_putnbr_fd(-1234567890,1);
}*/
