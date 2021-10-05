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

void print_map (char **map)
{
    int i;
    i = 0;
    printf("\n------------- Mapa: ------------\n");
    while (map[i])
    {
        printf("%s\n", map[i]);
        i++;
    }
    printf("\n");
}


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