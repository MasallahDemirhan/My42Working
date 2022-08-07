#ifndef _SO_LONG_H
#define _SO_LONG_H

# include "../minilibx/mlx.h"
# include "../libft/libft.h"


# define UP 13
# define ESC 53
# define DOWN 1
# define LEFT 0
# define RIGHT 2

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
typedef struct s_map
{
char **map;
int column;
int		row;
int player_row;
int player_column;
int counter;
int collectables;
void    *collectable;
void	*background;
void	*wall;
void    *exit;
void	*player;
void	*mlx;
void	*win;
void	**img;
int		index;
int		x_pos;
int		y_pos;
int		c_tot;

}	t_map;



void	put_score(t_map *data);
int	control_key(int c, t_map *data);
int	left_a(t_map *data, int c);
int	move(t_map *data, int i, int j);
int	exit_game(t_map *data);
void	put_player(t_map *data, int height, int width);
void	put_collectable(t_map *data, int height, int width);
void	get_img(t_map *data);
void	put_image(t_map *data);



#endif
