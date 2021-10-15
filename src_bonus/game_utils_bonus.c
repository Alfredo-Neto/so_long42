/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_utils_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:38:11 by ade-agui          #+#    #+#             */
/*   Updated: 2021/10/15 01:13:22 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	key_press(int keycode, t_game *game)
{
	if (keycode == XK_Escape)
		exit_game(game);
	if (game->end_game)
		return (0);
	player_update(keycode, game);
	map_render(game->map, game);
	show_info(game);
	display_moves(game);
	return (0);
}

void	swap_positions(char *curr_p, char *nx_p, char curr_val, char nx_val)
{
	*curr_p = nx_val;
	*nx_p = curr_val;
}
