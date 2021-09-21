#include "so_long.h"

int main (int argc, char **argv)
{ 
    char **map;
    int i;
    int j;

    map = NULL;

    if (argc == 2)
    {
        map = read_map(argv[1]);
        i = 0;
        while(map[i])
        {
            j = 0;
            while(map[i][j])
            {   
                printf("%c", map[i][j]);
                j++;
            }
            printf("\n");
            i++;
        }
    }
    return 0;
}