#include "so_long.h"
// todo:
    // destruir(dar free) no mapa, e tudo o mais, para nao continuar o jogo depois da saida
    // verificar se o mapa é válido
    // abstrair funcoes da main para outras(arquitetura)

    // bonus: criar tropas inimigas
    //        animar colecionaveis
    //        mostrar stats do jogo na propria janela, ao invés de apenas no shell

int main (int argc, char **argv)
{ 
    t_game   game;

    if (argc == 2)
    {
        game.map = read_map(argv[1]);
        init_game(&game);
        event_handler(&game);
        mlx_loop(game.mlx);
    }
    else
    {
        printf("No map specified!");
        exit(0);
    }
}
