#include "so_long.h"

void    map_counter (char **map, t_game *window)
{
    int  i;
    int j;
    int count_rows;
    int count_cols;
    int count_units;

    count_rows = 0;
    count_cols = 0;
    count_units = 0;

    i = 0;
    while(map[i])
    {
        j = 0;
        while(map[i][j])
        {   
            count_units++;
            j++;
        }
        count_rows++;
        i++;
    }
    count_cols = count_units / count_rows;
    window->win_width = count_cols;
    window->win_height = count_rows;
    printf("\nNúmero de linhas: %d. Número de Colunas: %d\n", window->win_height, window->win_width);
}