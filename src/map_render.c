#include "so_long.h"

void    map_render(char **map, t_game *game)
{
    int  i;
    int  j;

    i = 0;
    printf("-------Imagens mapeadas: ---------\n");
    while(map[i])
    {
        j = 0;
        while(map[i][j])
        {   
            if(map[i][j] == '1')
            {
	            map_image_positions(game);
                draw_image(game, game->wall, i, j);
                printf("1");
            }
               
            else if (map[i][j] == '0')
            {
	            map_image_positions(game);
                draw_image(game, game->empty_space, i, j);
                printf("0");
            }
            else
                printf(" ");
            j++;
        }
        printf("\n");
        i++;
    }
}