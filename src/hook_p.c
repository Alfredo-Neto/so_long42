/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:38:35 by ade-agui          #+#    #+#             */
/*   Updated: 2021/10/15 04:23:23 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	hook_p(t_game *game, int i, int j)
{
	if (game->player_direction == 'u')
		draw_image(game, game->player_u, i, j);
	if (game->player_direction == 'd')
		draw_image(game, game->player_d, i, j);
	if (game->player_direction == 'l')
		draw_image(game, game->player_l, i, j);
	if (game->player_direction == 'r')
		draw_image(game, game->player_r, i, j);
	game->x = i;
	game->y = j;
}
