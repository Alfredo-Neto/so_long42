/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:38:11 by ade-agui          #+#    #+#             */
/*   Updated: 2021/10/15 00:40:51 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	key_press(int keycode, t_game *game)
{
	if (keycode == XK_Escape)
		exit_game(game);
	if (game->end_game)
		return (0);
	player_update(keycode, game);
	map_render(game->map, game);
	show_info(game);
	return (0);
}
