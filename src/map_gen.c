#include "so_long.h"

char map_gen()
{
    int fd;
    int ret;
    char *line;

    fd = open('../assets/maps/map.ber', O_RDONLY);
    while(ft_get_next_line(fd, &line))
    {
        printf("%s", line);
        free(line);
    }
}