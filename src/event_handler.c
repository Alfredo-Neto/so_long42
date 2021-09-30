#include "so_long.h"

void event_handler(t_param *param, t_game *game, int (*f)())
{
    mlx_hook(game->win, X_EVENT_KEY_PRESS, 1L<<0, f, &param);
}