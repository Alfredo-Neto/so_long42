#include "so_long.h"

void print_map (char **map)
{
    int i;
    i = 0;
    printf("\nMapa: \n");
    while (map[i])
    {
        printf("%s\n", map[i]);
        i++;
    }
    printf("\n");
}