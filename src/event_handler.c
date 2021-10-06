#include "so_long.h"

void event_handler(t_game *game)
{
    mlx_hook(game->win, X_EVENT_KEY_PRESS, 1L<<0, &key_press, game);
    mlx_hook(game->win, X_EVENT_DESTROY_NOTIFY, 0, &exit_game, game);
}