/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:44:26 by ade-agui          #+#    #+#             */
/*   Updated: 2021/10/13 16:44:26 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

char	**read_map(char *path_to_file)
{
	int		fd;
	char	*line;
	char	*buffer;
	char	**map;

	fd = open(path_to_file, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr_fd("Mapa não pôde ser lido", fd);
		return (NULL);
	}
	buffer = ft_strdup("");
	while (ft_get_next_line(fd, &line))
	{
		buffer = ft_strjoin(buffer, line);
		buffer = ft_strjoin(buffer, "\n");
		ft_super_free((void *)&line);
	}
	buffer = ft_strjoin(buffer, line);
	map = ft_split(buffer, '\n');
	ft_super_free((void *)&line);
	ft_super_free((void *)&buffer);
	close(fd);
	return (map);
}
