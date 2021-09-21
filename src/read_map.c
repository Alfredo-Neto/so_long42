#include "so_long.h"

char **read_map(char *path_to_file)
{
    int fd;
    char *line;
    char *buffer;
    char **map;

    fd = open(path_to_file, O_RDONLY);
    if (fd == -1)
    {
        ft_putstr_fd("Mapa não pôde ser lido", fd);
        return (NULL);
    }
    buffer = ft_strdup("");
    while(ft_get_next_line(fd, &line))
    {
        buffer = ft_strjoin(buffer, line);
        buffer = ft_strjoin(buffer, "\n");
        ft_super_free((void *)&line);
    }
    map = ft_split(buffer, '\n');
    ft_super_free((void *)&buffer);
    close(fd);
    return (map);
}