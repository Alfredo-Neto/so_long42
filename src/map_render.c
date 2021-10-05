#include "so_long.h"

static void    map_render(char **map, t_game *game)
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
                hook_p(game, i, j);
            j++;
        }
        i++;
    }
}

void reload_map(char **map, t_game *game)
{
    map_render(map, game);
}

