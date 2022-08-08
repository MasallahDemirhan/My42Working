/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_image.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mademirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 12:09:59 by mademirh          #+#    #+#             */
/*   Updated: 2022/08/08 12:46:01 by mademirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	put_player(t_map *data, int height, int width)
{
	mlx_put_image_to_window(data->mlx, data->win, data->background,
		width * 64, height * 64);
	mlx_put_image_to_window(data->mlx, data->win, data->player,
		width * 64, height * 64);
	data->player_column = height;
	data->player_row = width;
}

void	put_collectable(t_map *data, int height, int width)
{	
	mlx_put_image_to_window(data->mlx, data->win, data->background,
		width * 64, height * 64);
	mlx_put_image_to_window(data->mlx, data->win, data->collectable,
		width * 64, height * 64);
	data->collectables += 1;
}

void	get_img(t_map *data)
{
	int	i;
	int	j;

	data->player = mlx_xpm_file_to_image(data->mlx, "./img/player.xpm", &i, &j);
	data->collectable = mlx_xpm_file_to_image(data->mlx, "./img/coin.xpm",
			&i, &j);
	data->background = mlx_xpm_file_to_image(data->mlx, "./img/background.xpm",
			&i, &j);
	data->wall = mlx_xpm_file_to_image(data->mlx, "./img/wall.xpm", &i, &j);
	data->exit = mlx_xpm_file_to_image(data->mlx, "./img/exitdoor.xpm", &i, &j);
	if (!data->player || !data->collectable || !data->background
		|| !data->wall || !data->exit)
	{
		printf("Error\n");
		exit_game(data);
	}
}

void	put_image_e(t_map *data, int i, int j)
{
	mlx_put_image_to_window(data->mlx, data->win,
		data->background, i * 64, j * 64);
	mlx_put_image_to_window(data->mlx, data->win,
		data->exit, i * 64, j * 64);
}

void	put_image(t_map *data)
{
	int	i;
	int	j;

	data->collectables = 0;
	j = -1;
	while (data->map[++j])
	{
		i = -1;
		while (data->map[j][++i])
		{
			if (data->map[j][i] == 'C')
				put_collectable(data, j, i);
			if (data->map[j][i] == '1')
				mlx_put_image_to_window(data->mlx, data->win,
					data->wall, i * 64, j * 64);
			if (data->map[j][i] == '0')
				mlx_put_image_to_window(data->mlx, data->win,
					data->background, i * 64, j * 64);
			if (data->map[j][i] == 'E')
				put_image_e(data, i, j);
			if (data->map[j][i] == 'P')
				put_player(data, j, i);
		}
	}
}
