#include "so_long.h"

void hook_p (t_game *game, int i, int j)
{
    draw_image(game, game->player_r, i, j);
    game->x = i;
    game->y = j;
}