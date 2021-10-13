/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_render.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:42:30 by ade-agui          #+#    #+#             */
/*   Updated: 2021/10/13 17:03:45 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	map_render(char **map, t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == '1')
				draw_image(game, game->wall, i, j);
			else if (map[i][j] == '0')
				draw_image(game, game->empty_space, i, j);
			else if (map[i][j] == 'C')
				draw_image(game, game->collectible, i, j);
			else if (map[i][j] == 'E')
				draw_image(game, game->exit, i, j);
			else if (map[i][j] == 'P')
				hook_p(game, i, j);
			j++;
		}
		i++;
	}
}
