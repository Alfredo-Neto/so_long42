#include "so_long.h"

void    draw_image(t_window *window, t_img *image, int x, int y)
{
	void *img;
	
	img = init_image(image);
	mlx_put_image_to_window
		(image->mlx, window->win, img, x, y);
}