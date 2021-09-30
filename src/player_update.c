#include "so_long.h"

void	player_update(int keycode, t_game *game)
{
    if(keycode == KEY_D)
	    move_right(game);
}    

