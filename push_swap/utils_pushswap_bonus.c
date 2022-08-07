/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_pushswap_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mademirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 02:51:11 by mademirh          #+#    #+#             */
/*   Updated: 2022/08/06 02:51:15 by mademirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_push(t_data *p, char check)
{
	if (check == 'a')
		ft_array_push(p->arr_a, p->a_size++, p->arr_b[p->b_size-- - 1]);
	else
		ft_array_push(p->arr_b, p->b_size++, p->arr_a[p->a_size-- - 1]);
}

void	ft_swap(t_data *p, char check)
{
	if (check == 'a')
		ft_array_swap(p->arr_a, p->a_size);
	else if (check == 'b')
		ft_array_swap(p->arr_b, p->b_size);
	else if (check == 'x')
	{
		ft_array_swap(p->arr_a, p->a_size);
		ft_array_swap(p->arr_b, p->b_size);
	}
}

void	ft_rotate(t_data *p, char check)
{
	if (check == 'a')
		ft_array_rotate(p->arr_a, p->a_size);
	else if (check == 'b')
		ft_array_rotate(p->arr_b, p->b_size);
	else if (check == 'x')
	{
		ft_array_rotate(p->arr_a, p->a_size);
		ft_array_rotate(p->arr_b, p->b_size);
	}
}

void	ft_revrotate(t_data *p, char check)
{
	if (check == 'a')
		ft_array_revrotate(p->arr_a, p->a_size);
	else if (check == 'b')
		ft_array_revrotate(p->arr_b, p->b_size);
	else if (check == 'x')
	{
		ft_array_revrotate(p->arr_a, p->a_size);
		ft_array_revrotate(p->arr_b, p->b_size);
	}
}
