#include "so_long.h"

void	ft_exit(t_map *data)
{
	if (data != NULL)
	{
		if (data->buffer)
			free(data->buffer);
		ft_free(data);
		mlx_destroy_window(data->mlx, data->win);
		free(data);
	}
	exit(0);
}

void	ft_free(t_map *data)
{
	int	i;

	i = data->row;
	if (data->map != NULL)
	{
		while (i >= 0)
		{
			if (data->map[i])
				free(data->map[i]);
			i--;
		}
		free(data->map);
		i = 0;
		if (data->img[i] != NULL)
		{
			while (i < 8)
			{
				if (data->img[i])
					mlx_destroy_image(data->mlx, data->img[i]);
				i++;
			}
			free(data->img);
		}
	}
}

void	is_res(t_map *data, char c)
{
	if (c == 'C')
	{
		if (data->c_tot > 0)
			data->c_tot--;
	}
	else if (c == 'E' && data->c_tot == 0)
		ft_exit(data);
}

int is_x(t_map *data)
{
	ft_exit(data);
	return (0);
}

void is_exit(t_map *data)
{
	if (data->c_tot != 0)
		return ;
	ft_exit(data);
}

