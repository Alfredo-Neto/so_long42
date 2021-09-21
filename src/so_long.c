#include "so_long.h"

int main (int argc, char **argv)
{ 
    t_window window;
    t_img   image;

    int i;

    char **map;

    if (argc == 2)
    {
        image.mlx = mlx_init();
        init_window(&window, &image);
        map = read_map(argv[1]);
        
        i = 0;
        printf("\nMapa: \n");
        while (map[i])
        {
            printf("%s\n", map[i]);
            i++;
        }
        printf("\n");
        image.map = map;
        map_render(image.map, &window, &image);
        mlx_loop(image.mlx);
    }
}