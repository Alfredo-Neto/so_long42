#include "so_long.h"

int main (int argc, char **argv)
{ 
    t_game   game;

    if (argc == 2)
    {
        game.mlx = mlx_init();
        game.map = read_map(argv[1]);
        map_counter(game.map, &game);
        init_window(&game);
    
        print_map(game.map);

    	map_image_positions(&game);

        map_render(game.map, &game);
        mlx_loop(game.mlx);
    }
}

// handle_opacity(FILE_EXIT, &game);