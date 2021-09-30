#include "so_long.h"

void    map_render(char **map, t_game *game)
{
    int  i;
    int  j;

    i = 0;
    while(map[i])
    {
        j = 0;
        while(map[i][j])
        {   
            if(map[i][j] == '1')
                draw_image(game, game->wall, i, j);
            else if (map[i][j] == '0')
                draw_image(game, game->empty_space, i, j);
            else if (map[i][j] == 'C')
                draw_image(game, game->collectible, i, j);
            else if (map[i][j] == 'E')
                draw_image(game, game->exit, i, j);
            else if (map[i][j] == 'P')
            {
                draw_image(game, game->player, i, j);
                // game->x = j;
                // game->y = i;
            }
            j++;
        }
        i++;
    }
}
