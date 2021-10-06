#include "so_long.h"

int key_press(int keycode, t_game *game)
{
    if (keycode == XK_Escape)
        exit_game(game);
    if(game->end_game)
        return(0);
    player_update(keycode, game);
    map_render(game->map, game);
    show_info(game);
    return (0);
}