#include "so_long.h"

void move_player(t_game *game, int x, int y)
{
    int i;
    int j;

    i = game->x;
    j = game->y;
    if(game->map[x][y] != '1')
    {
        swap_positions(&game->map[i][j], &game->map[x][y], 'P', '0');
        game->moves++;
        game->x = x;
        game->y = y;
    }
    print_map(game->map);
    printf("Moves: %d", game->moves);
}