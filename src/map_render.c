#include "so_long.h"

void    map_render(char **map, t_window *window, t_img *image)
{
    int  i;
    int  j;
    int count;

    i = 0;
    count = 0;
    while(map[i])
    {
        j = 0;
        while(map[i][j])
        {   
            if(map[i][j] == '1')
            {
                draw_image(window, image, i, j);
                printf("%c", map[i][j]);
                count++;
            }
            j++;
        }
        printf("\n");
        i++;
    }
    printf("Count: %d", count);
}