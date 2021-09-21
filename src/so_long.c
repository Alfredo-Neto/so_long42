#include "so_long.h"

int main (int argc, char **argv)
{ 
    char **map;
    int i;

    map = NULL;

    i = 0;
    if (argc == 2)
    {
        map = read_map(argv[1]);
        while(map[i])
        {
            printf("%s\n", map[i]);
            i++;
        }
    }
    return 0;
}