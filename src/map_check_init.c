#include "so_long.h"

void map_check_init(t_map *map)
{
    map->collectible = 0;
    map->exit = 0;
    map->player = 0;
    map->map_row_size = 0;
    map->map_col_size = 0;
}