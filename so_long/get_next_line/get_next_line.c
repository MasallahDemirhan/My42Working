/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mademirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 13:59:32 by mademirh          #+#    #+#             */
/*   Updated: 2022/04/05 15:40:35 by mademirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_others(char *s)
{
	char	*others;

	others = ft_strchr((const char *)s, '\n');
	if (!others)
	{
		free(s);
		return (NULL);
	}
	others++;
	if (!*others)
	{
		free(s);
		return (NULL);
	}
	others = ft_strdup(others);
	free(s);
	return (others);
}

char	*ft_absolute_l(char *s)
{
	char	*al;
	char	*gl;
	int		len;

	al = ft_strchr((const char *)s, '\n');
	if (!al)
		return (ft_strdup((const char *)s));
	al++;
	len = ft_strlen((const char *)s) - ft_strlen((const char *)al);
	gl = ft_substr((const char *)s, 0, len);
	return (gl);
}

char	*ft_get_data(int fd, char *buff, char *s)
{
	int		rd;
	char	*str;

	rd = 1;
	while (rd != 0 && !ft_strchr((const char *)s, '\n'))
	{
		rd = read(fd, buff, BUFFER_SIZE);
		if (rd < 0)
		{
			free(s);
			return (NULL);
		}
		buff[rd] = '\0';
		str = ft_strjoin((const char *)s, buff);
		free(s);
		s = str;
	}
	if (!*s)
	{
		free(s);
		return (NULL);
	}
	return (s);
}

char	*ft_read(int fd, char *s)
{
	char	*buff;

	if (!s)
		s = ft_strdup("");
	if (!s)
		return (NULL);
	buff = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	s = ft_get_data(fd, buff, s);
	free(buff);
	return (s);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	str = ft_read(fd, (char *)str);
	if (!str)
		return (NULL);
	line = ft_absolute_l((char *)str);
	if (!line)
		return (NULL);
	str = ft_others((char *)str);
	return (line);
}
