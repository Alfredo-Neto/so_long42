/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemy_update_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 00:37:30 by ade-agui          #+#    #+#             */
/*   Updated: 2021/10/14 02:41:43 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

static void update_enemy_position(t_game *game, int i, int j)
{
    if (game->map[i][j] == 'i' && game->map[i - 1][j] == '0')
        swap_positions(&game->map[i][j], &game->map[i - 1][j], '0', 'i');
    if (game->map[i][j] == 'k' && game->map[i + 1][j] == '0')
        swap_positions(&game->map[i][j], &game->map[i + 1][j], '0', 'k');
    if (game->map[i][j] == 'j' && game->map[i][j - 1] == '0')
        swap_positions(&game->map[i][j], &game->map[i][j - 1], '0', 'j');
    if (game->map[i][j] == 'l' && game->map[i][j + 1] == '0')
        swap_positions(&game->map[i][j], &game->map[i][j + 1], '0', 'l');
}

void enemy_update(t_game *game)
{
    int		i;
	int		j;

    if (game->loops < GAME_SPEED)
    {
        game->loops++;
        return ;
    }
    else
        game->loops = 0;

    i = 0;
    while (game->map[i])
    {
        j = 0;
        while(game->map[i][j])
        {
            if (is_enemy(game->map[i][j]))
                update_enemy_position(game, i, j);
        }
    }
    map_render(game->map, game);
}