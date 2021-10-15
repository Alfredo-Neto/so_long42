/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_moves.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 00:41:20 by ade-agui          #+#    #+#             */
/*   Updated: 2021/10/15 01:36:35 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	display_moves(t_game *game)
{
	char	*moves;
	char	*num;

	num = ft_itoa(game->moves);
	moves = ft_strjoin("MOVES: ", num);
	mlx_string_put(game->mlx, game->win, 1 * SPRITE_SIZE, 1.5 * SPRITE_SIZE,
		0x000000, moves);
	ft_super_free((void *)&moves);
	ft_super_free((void *)&num);
	return (0);
}
