/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemy_update_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 00:37:30 by ade-agui          #+#    #+#             */
/*   Updated: 2021/10/14 03:19:59 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

static void update_enemy_position(char **map, int i, int j)
{
    if (map[i][j] == 'i' && map[i - 1][j] == '0')
        swap_positions(&map[i][j], &map[i - 1][j], '0', 'i');
    if (map[i][j] == 'k' && map[i + 1][j] == '0')
        swap_positions(&map[i][j], &map[i + 1][j], '0', 'j');
    if (map[i][j] == 'j' && map[i][j - 1] == '0')
        swap_positions(&map[i][j], &map[i][j - 1], '0', 'k');
    if (map[i][j] == 'l' && map[i][j + 1] == '0')
        swap_positions(&map[i][j], &map[i][j + 1], '0', 'l');
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
    game->loops = 0;
    i = 0;
    while (game->map[i])
    {
        j = 0;
        while(game->map[i][j])
        {
            if (is_enemy(game->map[i][j]))
                update_enemy_position(game->map, i, j);
            j++;
        }
        i++;
    }
    map_render(game->map, game);
}