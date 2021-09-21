#include "so_long.h"

void    *init_image(t_img *image)
{
    image->img = mlx_xpm_file_to_image
        (image->mlx, FILE_WALL, &image->img_width, &image->img_height);
    return (image->img);
}