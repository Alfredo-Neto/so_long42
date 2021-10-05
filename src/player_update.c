#include "so_long.h"

void	player_update(int keycode, t_game *game)
{
    if(keycode == KEY_W || keycode == KEY_UP)
    {
	    handle_situation(game, game->x - 1, game->y);
        game->player_direction = 'u';
    }
    if(keycode == KEY_S || keycode == KEY_DOWN)
    {
	    handle_situation(game, game->x + 1, game->y);
        game->player_direction = 'd';
    }
    if(keycode == KEY_A || keycode == KEY_LEFT)
    {
        handle_situation(game, game->x, game->y - 1);
        game->player_direction = 'l';
    }
    if(keycode == KEY_D || keycode == KEY_RIGHT)
    {
	    handle_situation(game, game->x, game->y + 1);
        game->player_direction = 'r';
    }
}    

