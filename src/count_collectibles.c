#include "so_long.h"

void count_collectibles(char **map, t_game *game)
{
    int  i;
    int  j;

    i = 0;
    while(map[i])
    {
        j = 0;
        while(map[i][j])
        {   
            if(map[i][j] == 'C')
                game->collectibles++;
            j++;
        }
        i++;
    }
}
