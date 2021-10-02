#include "so_long.h"

void move_left(t_game *game, int x, int y)
{
    int i;
    int j;

    i = game->x;
    j = game->y;
    swap_positions(&game->map[i][j], &game->map[x][y], 'P', '0');
    print_map(game->map);
    game->x = x;
    game->y = y;
}