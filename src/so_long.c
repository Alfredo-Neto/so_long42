#include "so_long.h"

int main (int argc, char **argv)
{ 
    t_img game;

    if (argc == 2)
    {
        game.map = read_map(argv[1]);
        map_render(&game);
    }
    return 0;
}