#include "so_long.h"

int key_press(int keycode, t_game *game)
{
    player_update(keycode, game);
    return (0);
}

void  swap_positions (char *current_pos, char *next_pos, char current_value, char next_value)
{
    *current_pos = next_value;
    *next_pos = current_value;
}