#include <unistd.h>
#include "libft/libft.h"
#include <fcntl.h>
#include "get_next_line/get_next_line.h"
#include "minilibx/mlx.h"
#include "so_long.h"


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
			return (-1);
	i = 0;
	while (s[i])
	{
		if (s[i] == '\n' && s[i+1] && s[i+1] == '\n')
			return (-1);
		i++;
	}
	return (0);
}

int	put_error(char *s)
{
	while (*s)
		write(2, s++, 1);
	return (-1);
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
	   return (-1);
	return (0);	
}

int	check_wall(t_map *map)
{
	int  i;

	i  = 0;
	while (i < map->row)
	{
		if (map->map[i][0] != '1' || map->map[i][map->len-1] != '1')
			return (-1);
		i++;	
	}

	i = 0;
	while (i < map->len)
	{
		if (map->map[0][i] != '1' || map->map[map->row-1][i] != '1')
			return (-1);
		i++;
	}
	return (0);
}

int check_map(t_map *map)
{
	int	len;
	int	i;

	i  = 1;
	len = ft_strlen(map->map[0]);
	while (map->map[i])
	{
		if (len != (int)ft_strlen(map->map[i]))
				return (-1);
		i++;
	}
	map->len = len;
	map->row = i;
	if (check_wall(map) == -1)
		return (-1);
	return (0);
}

void	destroy_map(t_map *map)
{
	int i;

	i  = 0;
	while (i < map->row)
		free(map->map[i++]);
	free(map->map);
	free(map);
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
		data.win = mlx_new_window(data.mlx, data.len * 60, data.row * 60, "So Long");	
		add_img(&data);
		put_image(&data);
		mlx_hook(data.win, 2, 0, keyboard, &data);
		mlx_hook(data.win, 17, 17, is_x, &data);
		mlx_loop(data.mlx);
	}
	else
	{
		write(2, "Error\n", 6);

		return (0);
	}
	return (0);
}


