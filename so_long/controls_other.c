#include "so_long.h"

void	put_score(t_map *data)
{
	char	*score;

	score = ft_itoa(data->counter);
	mlx_string_put(data->mlx, data->win, 62, 62, 0xFF0000, score);
	free(score);
}

int	move(t_map *data, int i, int j)
{
	if (data->map[j][i] == 'E')
	{
		if (data->collectables != 0)
			return (0);
		printf("Step.s : %i\n", ++data->counter);
		printf("The End\n");
		exit_game(data);
	}
	if (data->map[j][i] == '0')
	{
		data->map[j][i] = 'P';
		data->player_column = i;
		data->player_row = j;
		data->counter++;
	}
	if (data->map[j][i] == 'C')
	{
		data->map[j][i] = '0';
		put_image(data);
		data->map[j][i] = 'P';
		data->player_column = i;
		data->player_row = j;
		data->collectables--;
		data->counter++;
	}
	return (1);
}

int	exit_game(t_map *data)
{
	int	i;

	i = 0;
	if (data->win)
	{
		mlx_destroy_window(data->mlx, data->win);
	}
	while (i < data->row)
	{
	 	free(data->map[i]);
	 	i++;
	}
	free(data->map);
    exit(0);
}