#include "so_long.h"

void    *init_image(char *img, t_game *image)
{
    img = mlx_xpm_file_to_image
        (image->mlx, img, &image->img_width, &image->img_height);
    return (img);
}

void   map_image_positions(t_game *image)
{
    image->wall = init_image(FILE_WALL, image);
    image->empty_space = init_image(FILE_SPACE, image);
    image->collectable = init_image(FILE_COLLECTABLE, image);
}