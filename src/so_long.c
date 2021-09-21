#include "so_long.h"

int main (int argc, char **argv)
{ 
    char **map;
    int i;

    i = 0;
    if (argc == 2)
    {
        map = read_map(argv[1]);
        printf("Mapa: %s", map[2]);
    }
    
    return 0;
}