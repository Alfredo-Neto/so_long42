#include "so_long.h"

void ft_putchar(int c)
{
	write(1, &c, 1);
}

int deal_key(int key, void *param)
{
	ft_putchar('X');
	return (0);
}

int main()
{
		void *mlx;
		void *win;
		void *img;

		int		img_width;
		int 	img_height;

		mlx = mlx_init();
		win = mlx_new_window(mlx, 500, 500, "my_mlx");
		img = mlx_xpm_file_to_image(mlx, "./textures/wall_n.xpm", &img_width, &img_height);
		mlx_put_image_to_window(mlx, win, img, 300, 300);
		mlx_key_hook(win, deal_key, (void *)0);
		mlx_loop(mlx);
		return (0);
}