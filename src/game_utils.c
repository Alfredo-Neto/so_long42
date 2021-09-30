#include "so_long.h"

int key_press(int keycode, t_game *game)
{
    player_update(keycode, game);
    return (0);
}

void get_player(char **map, t_game *game)
{
    int  i;
    int  j;

    i = 0;
    while(map[i])
    {
        j = 0;
        while(map[i][j])
        {   
            if (map[i][j] == 'P')
            {
                game->x = i;
                game->y = j;
            }
            j++;
        }
        i++;
    }
}

void  swap_positions (char *current_pos, char *next_pos, char current_value, char next_value)
{
    *current_pos = next_value;
    *next_pos = current_value;
}