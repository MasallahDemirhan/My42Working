#include <unistd.h>
#include "libft/libft.h"
#include <fcntl.h>
#include "get_next_line/get_next_line.h"
#include "minilibx/mlx.h"
#include "so_long.h"


int	put_error(char *s)
{
	while (*s)
		write(2, s++, 1);
	exit(0);
	return (-1);
}

int open_file(const char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	if (!i || ft_strncmp(".ber", &s[i-4], 4))
		return (0);
	return (open(s, O_RDONLY));
}

char *read_file(int fd)
{
	char *str;
	char *tmp;
	char *fr;

	str = NULL;
	tmp = "";
	fr = ft_strdup("");
	while (tmp)
	{
		tmp = get_next_line(fd);
		if (!tmp)
			break;
		str = ft_strjoin(fr, tmp);
		free(tmp);
		free(fr);
		fr = str;
	}
	if (!ft_strlen(fr))
	{
		free(fr);
		return (NULL);
	}
	return (fr);
}

int	check_str(char *s)
{
	int i;

	i = 0;
	while (s[i])
		if (!ft_strchr("01PEC\n", s[i++]))
			return (put_error("Error"));
	i = 0;
	while (s[i])
	{
		if (s[i] == '\n' && s[i+1] && s[i+1] == '\n')
			return (put_error("Error"));
		i++;
	}
	return (0);
}

char *get_str(char *str)
{
	int fd;

				
	fd = open_file(str);
	if (fd < 0)
		return (NULL);
	str = read_file(fd);

	if (!str)
		return (NULL);
	if (check_str(str) == -1)
	{
		free(str);
		return (NULL);
	}
	close(fd);
	return (str);
}


int check_value(char *str)
{
	int i;
	int c;
	int p;
	int e;

	i = 0;
	c = 0;
	p = 0;
	e = 0;
	while (str[i])
	{
		if (str[i] == 'C')
			c += 1;
		else if (str[i] == 'P')
			p += 1;
		else if (str[i] == 'E')
			e += 1;
		i++;
	}

	if (c <= 0  || p != 1 || e <= 0)
	   return (put_error("Error"));
	return (0);	
}

int	check_wall(t_map *map)
{
	int  i;

	i  = 0;
	while (i < map->row)
	{
		if (map->map[i][0] != '1' || map->map[i][map->column-1] != '1')
			return (put_error("Error"));
		i++;	
	}

	i = 0;
	while (i < map->column)
	{
		if (map->map[0][i] != '1' || map->map[map->row-1][i] != '1')
			return (put_error("Error"));
		i++;
	}
	return (0);
}

int check_map(t_map *data)
{
	int	column;
	int	i;

	i  = 1;
	column = ft_strlen(data->map[0]);
	while (data->map[i])
	{
		if (column != (int)ft_strlen(data->map[i]))
				return (put_error("Error"));
		i++;
	}
	data->column = column;
	data->row = i;
	if (check_wall(data) == -1)
		return (put_error("Error"));
	return (0);
}

void	destroy_map(t_map *data)
{
	int i;

	i  = 0;
	while (i < data->row)
		free(data->map[i++]);
	free(data->map);
}

t_map	*open_map(t_map *data, char *s)
{
	char *str;

	str = get_str(s);


	if (!str)
		return (NULL);
	if (check_value(str) == -1)
	{
		free(str);
		return (NULL);
	}
	data->map = ft_split(str, '\n');
	free(str);
	if(check_map(data) == -1)
	{
		destroy_map(data);
		return (NULL);
	}
	return (data);
}



int main(int ac, char **av)
{
	t_map	data;

	(void) av;
	if (ac == 2)
	{

		open_map(&data,av[1]);

		data.mlx = mlx_init();
		data.win = mlx_new_window(data.mlx, data.column  * 64,
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


