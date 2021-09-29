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


typedef struct s_game    t_game;

struct s_game
{
    void    *img;
    void    *mlx;
    void    *wall;
    void    *empty_space;
    void    *collectible;
    void    *player;
    void    *exit;
    void    *win;
    char    **map;
    int     img_width;
    int     img_height;
    int     win_height;
    int     win_width;
    int     map_size;
    char    **map_read;
};


typedef struct s_param{
	int     keycode;
}				t_param;


# define FILE_WALL "textures/1.xpm"
# define FILE_SPACE "textures/0.xpm"
# define FILE_COLLECTIBLE "textures/C.xpm"
# define FILE_PLAYER "textures/P_R.xpm"
# define FILE_EXIT "textures/E.xpm"
# define SPRITE_SIZE   32

char    **read_map(char *path_to_file);
void    map_render(char **map, t_game *game);
void    print_map (char **map);
void    map_counter (char **map, t_game *game);
int     map_update(int keycode, t_game *game);
void    initialize_image(t_game *game);
void    *convert_image(char *img, t_game *game);
void    draw_image(t_game *game, void *img, int x, int y);
void    init_window(t_game *game);
void    event_handler(t_param *param, t_game *game, int (*map_update)());
#endif

