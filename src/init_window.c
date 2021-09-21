#include "so_long.h"

void init_window(t_window *window, t_img *image)
{
   window->win_width = 500;
   window->win_height= 500;
   window->win = mlx_new_window
      (image->mlx, window->win_width, window->win_height, "so_long");
}