/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mademirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 12:28:43 by mademirh          #+#    #+#             */
/*   Updated: 2022/08/08 12:43:58 by mademirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../minilibx/mlx.h"
# include "../libft/libft.h"
# include "../get_next_line/get_next_line.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# define UP 13
# define ESC 53
# define DOWN 1
# define LEFT 0
# define RIGHT 2

typedef struct s_map
{
	char	**map;
	int		column;
	int		row;
	int		player_row;
	int		player_column;
	int		counter;
	int		collectables;
	void	*collectable;
	void	*background;
	void	*wall;
	void	*exit;
	void	*player;
	void	*mlx;
	void	*win;
	void	**img;
	int		index;
	int		x_pos;
	int		y_pos;
	int		c_tot;
}				t_map;

void	put_score(t_map *data);
int		control_key(int c, t_map *data);
int		left_a(t_map *data, int c);
int		move(t_map *data, int i, int j);
int		exit_game(t_map *data);
void	put_player(t_map *data, int height, int width);
void	put_collectable(t_map *data, int height, int width);
void	get_img(t_map *data);
void	put_image(t_map *data);
int		open_file(const char *s);
char	*read_file(int fd);
int		check_str(char *s);
char	*get_str(char *str);
t_map	*open_map(t_map *data, char *s);
int		put_error(char *s);
int		check_value(char *str);
int		check_wall(t_map *map);
int		check_map(t_map *data);
void	destroy_map(t_map *data);
void	put_image_e(t_map *data, int i, int j);
void	move2(t_map *data, int i, int j);
#endif
