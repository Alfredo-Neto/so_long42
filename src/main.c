#include "so_long.h"

int				key_press(int keycode, void *param)
{
	// static int a = 0;

	// if (keycode == 'w')//Action when W key pressed
	// 	param->x++;
	// else if (keycode == 's') //Action when S key pressed
	// 	param->x--;
	// else if (keycode == XK_Escape) //Quit the program when ESC key pressed
	// 	exit(0);

	if (keycode == XK_Escape)
	{
		printf("tecla: %d\n", keycode);
		exit(0);
	}
		
	printf("tecla: %d\n", keycode);
	return (0);
}

int			main(void)
{
	void		*mlx;
	void		*win;
	void		*img;
	int		img_width;
	int		img_height;


	mlx = mlx_init();
	win = mlx_new_window(mlx, 500, 500, "mlx_project");
	img = mlx_xpm_file_to_image(mlx, "./textures/wall_n.xpm", &img_width, &img_height);
	mlx_put_image_to_window(mlx, win, img, 50, 50);
	printf("-----------------------------------------------------------------------\n");
	printf("Pressione qualquer tecla, e seu número correspondente será mostrado\n");
	printf("'Tecla ESC': Sair do programa\n");
	printf("-----------------------------------------------------------------------\n");
	mlx_hook(win, 2, 1L<<0, &key_press, (void *)0);
	mlx_loop(mlx);
}