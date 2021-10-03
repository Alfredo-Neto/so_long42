#include "so_long.h"

int key_press(int keycode, t_game *game)
{
    if (keycode == XK_Escape)
        exit(0);
    player_update(keycode, game);
    return (0);
}