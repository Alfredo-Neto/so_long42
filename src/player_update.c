#include "so_long.h"

void	player_update(int keycode, t_game *game)
{
    if (keycode == 'w')//Action when W key pressed
		game->x++;
	else if (keycode == 's') //Action when S key pressed
		game->x--;
	else if (keycode == XK_Escape) //Quit the program when ESC key pressed
		exit(0);
	printf("x: %d\n", game->x);
    // if(keycode == KEY_D)
	//     move_right(game);
}    

