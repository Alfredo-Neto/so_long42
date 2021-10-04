#include "so_long.h"


static void  swap_positions (char *curr_pos, char *next_pos, char curr_val, char next_val)
{
    *curr_pos = next_val;
    *next_pos = curr_val;
}

static void handle_0(t_game *game, int x, int y)
{
    int i;
    int j;

    i = game->x;
    j = game->y;
    swap_positions(&game->map[i][j], &game->map[x][y], 'P', '0');
    game->x = x;
    game->y = y;
    game->moves++;
}

static void handle_c(t_game *game, int x, int y)
{
    int i;
    int j;

    i = game->x;
    j = game->y;
    swap_positions(&game->map[i][j], &game->map[x][y], 'P', '0');
    game->collected++;
    game->moves++;
    game->x = x;
    game->y = y;
}

static void handle_e(t_game *game, int x, int y)
{
    int i;
    int j;

    i = game->x;
    j = game->y;
    if (game->collected == game->collectibles)
    {
        swap_positions(&game->map[i][j], &game->map[x][y], 'E', '0');
        game->moves++;
        game->x = x;
        game->y = y;
    }
}

void handle_situation(t_game *game, int x, int y)
{
    if (game->map[x][y] != '1')
    {
        if (game->map[x][y] == '0')
            handle_0(game, x, y);
        if (game->map[x][y] == 'C')
            handle_c(game, x, y);
        if (game->map[x][y] == 'E')
            handle_e(game, x, y);
    }
}