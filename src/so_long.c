#include "so_long.h"

int main (int argc, char **argv)
{ 
    char **map;
    map = NULL;

    if (argc != 0)
    {
        map = read_map(argv[1]);
        printf("\nMapa: %s", *map);
    }

    // printf("\n\n---------- Imprimir mapa formatado: -------------\n");
    // fill_map_positions(map);
    
    return 0;
}