#include "so_long.h"

int main (int argc, char **argv)
{ 
    t_window window;
    t_img   image;


    if (argc == 2)
    {
        image.mlx = mlx_init();
        image.map = read_map(argv[1]);
        map_counter(image.map, &window);
        init_window(&window, &image);
    
        print_map(image.map);

        map_render(image.map, &window, &image);
        mlx_loop(image.mlx);
    }
}