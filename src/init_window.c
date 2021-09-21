#include "so_long.h"

void init_window(t_game *game)
{
   game->win = mlx_new_window
      (game->mlx, game->win_width * SPRITE_SIZE, game->win_height * SPRITE_SIZE, "so_long");
}