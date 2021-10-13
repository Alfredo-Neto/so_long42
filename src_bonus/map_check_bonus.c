/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:54:37 by ade-agui          #+#    #+#             */
/*   Updated: 2021/10/13 16:44:26 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	has_valid_walls(char **map, t_map *m)
{
	int	i;
	int	j;

	while (map[m->map_col_size])
		m->map_col_size++;
	m->map_col_size--;
	m->map_row_size = ft_strlen(*map) - 1;
	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[0][j] != '1' ||
				map[i][0] != '1' || map[i][m->map_row_size] != '1'
				|| map[m->map_col_size][j] != '1')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	has_valid_chars(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] != '1' && map[i][j] != '0'
			&& map[i][j] != 'P' && map[i][j] != 'C'
			&& map[i][j] != 'E')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	has_minimum_chars(char **map, t_map *m)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'P')
				m->player++;
			if (map[i][j] == 'C')
				m->collectible++;
			if (map[i][j] == 'E')
				m->exit++;
			if (map[i][j] == '0')
				m->space++;
			if (m->collectible > 0
				&& m->exit > 0 && m->player > 0 && m->space > 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	is_rectangular(char **map)
{
	int			i;
	size_t		line_size;

	i = 0;
	line_size = ft_strlen(*map);
	while (map[++i])
		if (ft_strlen(map[i]) != line_size)
			return (0);
	return (1);
}

int	has_valid_extension(char *file)
{
	char	*ext;

	if (!file)
		return (0);
	ext = ft_strrchr(file, '.');
	if (ft_strncmp(ext, ".ber", 5))
		return (0);
	return (1);
}
