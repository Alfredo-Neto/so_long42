#include "so_long.h"

char *map_gen()
{
    int fd;
    char *line;

    fd = open("../assets/maps/map.ber", O_RDONLY);
    if (fd < 0)
    {
        ft_putstr_fd("Mapa não pôde ser lido", fd);
        return (NULL);
    }
    while(ft_get_next_line(fd, &line))
    {
        printf("%s\n", line);
        ft_super_free((void *)&line);
    }
    close(fd);
    return (line);
}