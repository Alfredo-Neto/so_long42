#include "so_long.h"

int	map_update(int keycode, t_game *game)
{
    int  i;
    int  j;
    
    printf("KEYCODE: %d", keycode);

    i = 0;
    while(game->map[i])
    {
        j = 0;
        while(game->map[i][j])
        {
            if (game->map[i][j] == 'P')
            {
                game->map[i][j] = '0';
                game->map[i][++j] = 'P';
            }
            j++;
        }
        i++;
    }
    return (0);
}    
    

    // static int x = 3;
	// if (keycode == 'w')
    // {
	// 	x++;
    //     printf("W: %d\n", x);
    // }
	// if (keycode == 's')
    // {
	// 	x--;
    //     printf("S: %d\n", x);
    // }
	// else if (keycode == 'd')
    //     printf("D: %d\n", x);
    // else if (keycode == 'a')
    //     printf("A: %d\n", x);
    // else if (keycode == XK_Escape)
    // {
    //     printf("ESC: %d\n", x);
	//     exit(0);
    // }
	// return (0);
