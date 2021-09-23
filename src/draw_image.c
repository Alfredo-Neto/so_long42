#include "so_long.h"

void    draw_image(t_game *game, void *img, int x, int y)
{	
	mlx_put_image_to_window
		(game->mlx, game->win, img, y * SPRITE_SIZE, x * SPRITE_SIZE);
}
