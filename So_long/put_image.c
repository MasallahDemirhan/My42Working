#include "so_long.h"

int create_img(t_map *data, char *path, int i)
{
    data->img[i] = mlx_xpm_file_to_image(data->mlx, path,
                                         &data->x_pos, &data->y_pos);
    return (!data->img[i]);
}

void add_img(t_map *data)
{
    int is_error;

    is_error = 0;
    printf("%d %d\n",data->len,data->row);
    data->img = (void**)malloc(sizeof(void *) * 6);
    is_error += create_img(data, "img/player_icon.xpm", 0);
    is_error += create_img(data, "img/water_icon.xpm", 1);
    is_error += create_img(data, "img/tree_icon.xpm", 2);
    is_error += create_img(data, "img/door_icon.xpm", 3);
    is_error += create_img(data, "img/coin_icon.xpm", 4);
    printf("sadads\n");
    if (is_error)
        put_error("Error\n");
}

void put_image(t_map *data)
{
    int i;
    int j;

    i = 0;
    data->x_pos = 0;
    data->y_pos = 0;
    while(data->map[i])
    {
        j = -1;
        while (data->map[i][++j])
        {
            if (data->map[i][j] == '1')
                mlx_put_image_to_window(data->mlx, data->win, data->img[2],
                                        data->x_pos, data->y_pos);
            else if (data->map[i][j] == '0')
                mlx_put_image_to_window(data->mlx, data->win, data->img[1],
                                        data->x_pos, data->y_pos);
            else if (data->map[i][j] == 'E')
                mlx_put_image_to_window(data->mlx, data->win, data->img[3],
                                        data->x_pos, data->y_pos);
            else if (data->map[i][j] == 'C')
                mlx_put_image_to_window(data->mlx, data->win, data->img[4],
                                        data->x_pos, data->y_pos);
            else if (data->map[i][j] == 'P')
                mlx_put_image_to_window(data->mlx, data->win, data->img[0],
                                        data->x_pos, data->y_pos);
            data->x_pos += 60;
        }
        data->x_pos = 0;
        printf("1\n");
        data->y_pos += 60;
        i++;
    }

}