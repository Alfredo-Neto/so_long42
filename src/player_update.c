#include "so_long.h"

void	player_update(int keycode, t_game *game)
{
    if(keycode == KEY_W || keycode == KEY_UP)
	    move_player(game, game->x - 1, game->y);
    if(keycode == KEY_S || keycode == KEY_DOWN)
	    move_player(game, game->x + 1, game->y);
    if(keycode == KEY_A || keycode == KEY_LEFT)
	    move_player(game, game->x, game->y - 1);
    if(keycode == KEY_D || keycode == KEY_RIGHT)
	    move_player(game, game->x, game->y + 1);
}    

