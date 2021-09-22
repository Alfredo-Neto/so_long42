#include "so_long.h"

void    *init_image(char *img, t_game *game)
{
    img = mlx_xpm_file_to_image
        (game->mlx, img, &game->img_width, &game->img_height);
    return (img);
}

void   map_image_positions(t_game *game)
{
    game->wall = init_image(FILE_WALL, game);
    game->empty_space = init_image(FILE_SPACE, game);
    game->collectable = init_image(FILE_COLLECTABLE, game);
}