#include "so_long.h"

void move_right(t_game *game)
{
    int i;
    int j;

    i = game->x;
    j = game->y;
    if (game->map[i][j + 1] == '0')
        swap_positions(&game->map[i][j], &game->map[i][j + 1], 'P', '0');
}