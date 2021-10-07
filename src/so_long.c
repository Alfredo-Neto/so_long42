#include "so_long.h"
// todo:
        // norminette
    // bonus: criar tropas inimigas
    //        animar colecionaveis
    //        mostrar stats do jogo na propria janela, ao invés de apenas no shell

int main (int argc, char **argv)
{ 
    t_game   game;

    if (argc == 2)
    {
        game.map = read_map(argv[1]);
        if (is_valid_map(game.map, argv[1]))
        {   
            init_game(&game);
            event_handler(&game);
            mlx_loop(game.mlx);
        }
        else
        {
            printf("Error\n This map is not valid!");
            free_map(game.map);
            exit(0);
        }
    }
    else
    {
        printf("No map specified!");
        exit(0);
    }
}
