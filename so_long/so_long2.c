/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mademirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 12:04:40 by mademirh          #+#    #+#             */
/*   Updated: 2022/08/08 12:07:26 by mademirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	put_error(char *s)
{
	while (*s)
		write(2, s++, 1);
	exit(0);
	return (-1);
}

int	check_value(char *str)
{
	int	i;
	int	c;
	int	p;
	int	e;

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
	if (c <= 0 || p != 1 || e <= 0)
		return (put_error("Error"));
	return (0);
}

int	check_wall(t_map *map)
{
	int	i;

	i = 0;
	while (i < map->row)
	{
		if (map->map[i][0] != '1' || map->map[i][map->column - 1] != '1')
			return (put_error("Error"));
		i++;
	}
	i = 0;
	while (i < map->column)
	{
		if (map->map[0][i] != '1' || map->map[map->row - 1][i] != '1')
			return (put_error("Error"));
		i++;
	}
	return (0);
}

int	check_map(t_map *data)
{
	int	column;
	int	i;

	i = 1;
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
	int	i;

	i = 0;
	while (i < data->row)
		free(data->map[i++]);
	free(data->map);
}
