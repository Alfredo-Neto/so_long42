/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_enemy_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 01:09:13 by ade-agui          #+#    #+#             */
/*   Updated: 2021/10/14 21:02:11 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	hook_enemy(t_game *game, int i, int j)
{
	if (game->map[i][j] == 'i')
		draw_image(game, game->enemy_w, i, j);
	if (game->map[i][j] == 'k')
		draw_image(game, game->enemy_s, i, j);
	if (game->map[i][j] == 'j')
		draw_image(game, game->enemy_a, i, j);
	if (game->map[i][j] == 'l')
		draw_image(game, game->enemy_d, i, j);
}
