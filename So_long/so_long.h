#ifndef _SO_LONG_H
#define _SO_LONG_H

# include "../minilibx/mlx.h"


# define UP 13
# define ESC 53
# define DOWN 1
# define LEFT 0
# define RIGHT 2

#include <stdio.h>
#include <stdlib.h>
typedef struct s_map
{
char **map;
char *buffer;
int len;
int		row;
void	*mlx;
void	*win;
void	**img;
int		index;
int		x_pos;
int		y_pos;
void	*character;
int		c_tot;

}	t_map;


int	put_error(char *s);
void	put_image(t_map *data);
void add_img(t_map *data);
int	keyboard(int keycode, t_map *data);
int	is_x(t_map *data);
void	is_exit(t_map *data);
void	ft_exit(t_map *data);
void	ft_free(t_map *data);
void	is_res(t_map *data, char c);
void	put_image_background(t_map *data);
void	take_image(t_map *data);

#endif
