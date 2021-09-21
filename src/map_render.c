#include "so_long.h"

void    map_render(char **map, t_window *window, t_img *image)
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
            {
                draw_image(window, image, i, j);
                printf("%c", map[i][j]);
            }
            j++;
        }
        printf("\n");
        i++;
    }
}