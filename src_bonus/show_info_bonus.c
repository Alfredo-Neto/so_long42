/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_info_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:44:39 by ade-agui          #+#    #+#             */
/*   Updated: 2021/10/13 16:44:26 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	show_info(t_game *game)
{
	printf("Moves: %d\n", game->moves);
	printf("Collectibles: %d, Collected: %d",
		game->collectibles, game->collected);
	print_map(game->map);
}
