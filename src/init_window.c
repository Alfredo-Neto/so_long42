#include "so_long.h"

void init_window(t_window *window, t_img *image)
{
   window->win = mlx_new_window
      (image->mlx, window->win_width * SPRITE_SIZE, window->win_height * SPRITE_SIZE, "so_long");
}