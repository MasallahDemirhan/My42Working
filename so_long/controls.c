/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controls.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mademirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 12:46:47 by mademirh          #+#    #+#             */
/*   Updated: 2022/08/08 12:47:14 by mademirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	left_a(t_map *data, int c)
{
	int	i;
	int	j;
	int	k;

	i = data->player_row;
	j = data->player_column;
	if (c == 0)
	{
		i--;
		if (data->map[j][i] == '1')
			return (0);
		k = move(data, i, j);
		if (!k)
			return (0);
		data->map[j][i + 1] = '0';
	}
	printf("Step.a : %i\n", data->counter);
	return (1);
}

int	up_w(t_map *data, int c)
{
	int	i;
	int	j;
	int	k;

	i = data->player_row;
	j = data->player_column;
	if (c == 13)
	{
		j--;
		if (data->map[j][i] == '1')
			return (0);
		k = move(data, i, j);
		if (!k)
			return (0);
		data->map[j + 1][i] = '0';
	}
	printf("Step.a : %i\n", data->counter);
	return (1);
}

int	down_s(t_map *data, int c)
{
	int	i;
	int	j;
	int	k;

	i = data->player_row;
	j = data->player_column;
	if (c == 1)
	{
		j++;
		if (data->map[j][i] == '1')
			return (0);
		k = move(data, i, j);
		if (!k)
			return (0);
		data->map[j - 1][i] = '0';
	}
	printf("Step.a : %i\n", data->counter);
	return (1);
}

int	right_d(t_map *data, int c)
{
	int	i;
	int	j;
	int	k;

	i = data->player_row;
	j = data->player_column;
	if (c == 2)
	{
		i++;
		if (data->map[j][i] == '1')
			return (0);
		k = move(data, i, j);
		if (!k)
			return (0);
		data->map[j][i - 1] = '0';
	}
	printf("Step.a : %i\n", data->counter);
	return (1);
}

int	control_key(int c, t_map *data)
{
	int	step;

	if (c == 13)
		step = up_w(data, c);
	if (c == 1)
		step = down_s(data, c);
	if (c == 0)
		step = left_a(data, c);
	if (c == 2)
		step = right_d(data, c);
	if (c == 53)
		exit_game(data);
	if (step)
	{
		put_image(data);
		put_score(data);
	}
	return (1);
}
