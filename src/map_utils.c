#include "so_long.h"

void    map_counter (char **map, t_game *game)
{
    int  i;

    i = 0;
    game->win_height = 0;
    while(map[i])
    {   
        game->win_height++;
        i++;
    }
    game->win_width = ft_strlen(*map);
    game->map_size = game->win_height * game->win_width;
}