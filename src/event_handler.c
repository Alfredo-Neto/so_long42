#include "so_long.h"

void event_handler(t_game *game)
{
    map_render(game->map, game);
    mlx_hook(game->win, X_EVENT_KEY_PRESS, 1L<<0, &key_press, game);
}