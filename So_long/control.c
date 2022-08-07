#include "so_long.h"

void	is_right(t_map *data)
{
	int i;
	int j;

	i = 0;
	j = 0;
	printf("---1--\n");
	if (data->map[data->len][data->row + 1] != '1')
	{
		printf("2\n");
		if (data->map[data->len][data->row + 1] == 'E')
			is_exit(data);
		else
		{
			printf("---3---\n");
			is_res(data, data->map[data->len][data->row + 1]);
			data->character = data->img[0];
			data->map[data->len][data->row + 1] = 'P';
			data->map[data->len][data->row] = '0';
			mlx_put_image_to_window(data->mlx, data->win, data->character,
					data->x_pos, data->y_pos);
			printf("---4----\n");
		}
	}
}

int	keyboard(int keycode, t_map *data)
{
	if (keycode == RIGHT)
		is_right(data);
	else if (keycode == LEFT)
		printf("so\n");
	else if (keycode == UP)
		printf("yu\n");
	else if (keycode == DOWN)
		printf("as\n");
	else if (keycode == ESC)
		printf("esc\n");
	//mlx_clear_window(data->mlx, data->win);
	put_image(data);
	return (keycode);
}
/*
int	is_x(t_map *data)

{
    data = 0;
    return (0);
}*/


