typedef struct s_param{
	int		x;
	int		y;
	char	str[3];
}				t_param;

//Only param->x will be used. 
void			param_init(t_param *param)
{
	param->x = 3;
	param->y = 4;
	param->str[0] = 'a';
	param->str[1] = 'b';
	param->str[2] = '\0';
}

int				key_press(int keycode, t_param *param)
{
	static int a = 0;

	if (keycode == KEY_W)//Action when W key pressed
		param->x++;
	else if (keycode == KEY_S) //Action when S key pressed
		param->x--;
	else if (keycode == KEY_ESC) //Quit the program when ESC key pressed
		exit(0);
	printf("x: %d\n", param->x);
	return (0);
}

int			main(void)
{
	void		*mlx;
	void		*win;
	t_param		param;

	param_init(&param);
	mlx = mlx_init();
	win = mlx_new_window(mlx, 500, 500, "mlx_project");
	printf("-------------------------------\n");
	printf("'W key': Add 1 to x.\n");
	printf("'S key': Subtract 1 from x\n");
	printf("'ESC key': Exit this program\n");
	printf("'Other keys': print current x \n");
	printf("-------------------------------\n");
	printf("Current x = 3\n");
	mlx_hook(win, 1L<<0, 0, &key_press, &param);
	mlx_loop(mlx);
}
