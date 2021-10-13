/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:40:59 by ade-agui          #+#    #+#             */
/*   Updated: 2021/10/13 17:03:40 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_window(t_game *game)
{
	game->win = mlx_new_window
		(game->mlx, game->win_width * SPRITE_SIZE,
			game->win_height * SPRITE_SIZE, "so_long");
}
