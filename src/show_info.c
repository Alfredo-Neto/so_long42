#include "so_long.h"

void show_info(t_game *game)
{
    printf("Moves: %d\n", game->moves);
    printf("Collectibles: %d, Collected: %d", game->collectibles, game->collected);
    print_map(game->map);
}