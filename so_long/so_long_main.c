/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mademirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 12:07:53 by mademirh          #+#    #+#             */
/*   Updated: 2022/08/08 12:09:15 by mademirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	t_map	data;

	(void) av;
	if (ac == 2)
	{
		open_map (&data, av[1]);
		data.mlx = mlx_init();
		data.win = mlx_new_window(data.mlx, data.column * 64,
				data.row * 64, "So long");
		get_img(&data);
		put_image(&data);
		put_score(&data);
		mlx_hook(data.win, 2, 1L << 0, control_key, &data);
		mlx_hook(data.win, 17, 0, (void *)exit_game, &data);
		mlx_loop(data.mlx);
	}
	else
	{
		write(2, "Error\n", 6);
		return (0);
	}
	return (0);
}
