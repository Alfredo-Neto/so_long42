#ifndef SO_LONG_H
# define SO_LONG_H
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <math.h>
# include "../libraries/mlx_linux/mlx.h"
# include "../libraries/libft/libft.h"

# define XK_MISCELLANY
# include <X11/keysymdef.h>
# include <X11/X.h>


typedef struct s_img    t_img;
typedef struct s_window t_window;

struct s_img
{
    void    *img;
    void    *mlx;
    void    *wall;
    void    *empty_space;
    void    *collectable;
    void    *player;
    char    **map;
    int     img_width;
    int     img_height;
};

struct s_window
{
    void    *win;
    int     win_width;
    int     win_height;
};

# define FILE_WALL "./textures/wall_n.xpm"

char    **read_map();
void    map_render(char **map, t_window *window, t_img *image);
void    *init_image(t_img *image);
void    draw_image(t_window *window, t_img *image, int x, int y);
void    init_window(t_window *window, t_img *image);

#endif