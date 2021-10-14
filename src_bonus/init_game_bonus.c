/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_game_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:40:36 by ade-agui          #+#    #+#             */
/*   Updated: 2021/10/14 16:09:48 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

static void	initialize_mlx(t_game *game)
{
	game->mlx = mlx_init();
}

static void	initialize_data(t_game *game)
{
	map_counter(game->map, game);
	count_collectibles(game->map, game);
	game->moves = 0;
	game->collected = 0;
	game->collectibles = 0;
	game->frame = 0;
	game->end_game = 0;
	game->loops = 0;
	game->animations = 0;
	game->player_direction = 'r';
}

static void	initialize_rendering(t_game *game)
{
	init_window(game);
	initialize_image(game);
	map_render(game->map, game);
}

void	init_game(t_game *game)
{
	initialize_mlx(game);
	initialize_data(game);
	enemy_init(game);
	initialize_rendering(game);
}
