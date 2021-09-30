#include "so_long.h"

void event_handler(t_param *param, t_game *game)
{
    mlx_hook(game->win, 2, 1L<<0, &key_press, &param);
}