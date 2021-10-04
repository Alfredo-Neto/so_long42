#include "so_long.h"

void hook_c (t_game *game, int i, int j)
{
    draw_image(game, game->collectible, i, j);
    game->collectibles++;
}