#include "so_long.h"

void    draw_image(t_game *game, void *img, int x, int y)
{	
	mlx_put_image_to_window
		(game->mlx, game->win, img, x * SPRITE_SIZE, y * SPRITE_SIZE);
}
