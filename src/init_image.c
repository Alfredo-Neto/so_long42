#include "so_long.h"

void    *init_image(char *img, t_game *image)
{
    img = mlx_xpm_file_to_image
        (image->mlx, img, &image->img_width, &image->img_height);
    return (img);
}

void   map_image_positions(t_game *game)
{
    game->wall = init_image(FILE_WALL, game);
    game->empty_space = init_image(FILE_SPACE, game);
    game->collectable = init_image(FILE_COLLECTABLE, game);
}