/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_player_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:43:48 by ade-agui          #+#    #+#             */
/*   Updated: 2021/10/14 22:57:22 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

static void	handle_0(t_game *game, int x, int y)
{
	int	i;
	int	j;

	i = game->x;
	j = game->y;
	swap_positions(&game->map[i][j], &game->map[x][y], 'P', '0');
	game->moves++;
	game->x = x;
	game->y = y;
}

static void	handle_c(t_game *game, int x, int y)
{
	int	i;
	int	j;

	i = game->x;
	j = game->y;
	swap_positions(&game->map[i][j], &game->map[x][y], 'P', '0');
	game->collected++;
	game->moves++;
	game->x = x;
	game->y = y;
}

static void	handle_e(t_game *game, int x, int y)
{
	int	i;
	int	j;

	i = game->x;
	j = game->y;
	if (game->collected == game->collectibles)
	{
		swap_positions(&game->map[i][j], &game->map[x][y], 'E', '0');
		game->moves++;
		game->end_game = 1;
		game->x = x;
		game->y = y;
	}
}

void	handle_situation(t_game *game, int x, int y)
{
	if (game->map[x][y] != '1')
	{
		if (game->map[x][y] == '0')
			handle_0(game, x, y);
		if (game->map[x][y] == 'C')
			handle_c(game, x, y);
		if (game->map[x][y] == 'E')
			handle_e(game, x, y);
		if (is_enemy(game->map[x][y]))
			enemy_kill(game);
	}
}
