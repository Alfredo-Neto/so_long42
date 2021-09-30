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
        
        key_press(param.keycode, &game);
        event_handler(&param, &game, &key_press);
        
        // print_map(game.map);

        mlx_loop(game.mlx);
    }
}
