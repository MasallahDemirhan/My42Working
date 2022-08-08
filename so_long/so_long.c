/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mademirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:41:06 by mademirh          #+#    #+#             */
/*   Updated: 2022/08/08 12:04:31 by mademirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	open_file(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	if (!i || ft_strncmp(".ber", &s[i - 4], 4))
		return (0);
	return (open(s, O_RDONLY));
}

char	*read_file(int fd)
{
	char	*str;
	char	*tmp;
	char	*fr;

	str = NULL;
	tmp = "";
	fr = ft_strdup("");
	while (tmp)
	{
		tmp = get_next_line(fd);
		if (!tmp)
			break ;
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
	int	i;

	i = 0;
	while (s[i])
		if (!ft_strchr("01PEC\n", s[i++]))
			return (put_error("Error"));
	i = 0;
	while (s[i])
	{
		if (s[i] == '\n' && s[i + 1] && s[i + 1] == '\n')
			return (put_error("Error"));
		i++;
	}
	return (0);
}

char	*get_str(char *str)
{
	int	fd;

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

t_map	*open_map(t_map *data, char *s)
{
	char	*str;

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
	if (check_map(data) == -1)
	{
		destroy_map(data);
		return (NULL);
	}
	return (data);
}
