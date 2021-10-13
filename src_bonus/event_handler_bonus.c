/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event_handler_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:37:35 by ade-agui          #+#    #+#             */
/*   Updated: 2021/10/13 18:40:23 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	event_handler(t_game *game)
{
	mlx_hook(game->win, X_EVENT_KEY_PRESS, 1L << 0, &key_press, game);
	mlx_hook(game->win, X_EVENT_DESTROY_NOTIFY, 0, &exit_game, game);
	mlx_loop_hook(game->mlx, &loop_hook, game);
}
