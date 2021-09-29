#include "so_long.h"

int main (int argc, char **argv)
{ 
    t_game   game;
    t_param param;

    if (argc == 2)
    {
        game.mlx = mlx_init();
        game.map = read_map(argv[1]);
        map_counter(game.map, &game);
        init_window(&game);
    
        print_map(game.map);

    	initialize_image(&game);

        map_render(game.map, &game);

        map_update(param.keycode, &game);
        
        print_map(game.map);

        event_handler(&param, &game, &map_update);
        mlx_loop(game.mlx);
    }
}
