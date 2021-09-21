#include "so_long.h"

void    map_render(t_img *game)
{
    int  i;
    int  j;

    i = 0;
    while(game->map[i])
    {
        j = 0;
        while(game->map[i][j])
        {   
            printf("%c", game->map[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}