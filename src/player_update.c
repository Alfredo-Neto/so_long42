#include "so_long.h"

void	player_update(int keycode, t_game *game)
{
    if(keycode == KEY_W || keycode == KEY_UP)
	    handle_situation(game, game->x - 1, game->y);
    if(keycode == KEY_S || keycode == KEY_DOWN)
	    handle_situation(game, game->x + 1, game->y);
    if(keycode == KEY_A || keycode == KEY_LEFT)
	    handle_situation(game, game->x, game->y - 1);
    if(keycode == KEY_D || keycode == KEY_RIGHT)
	    handle_situation(game, game->x, game->y + 1);
    printf("Moves: %d\n", game->moves);
    printf("Collectibles: %d, Collected: %d", game->collectibles, game->collected);
    print_map(game->map);
}    

