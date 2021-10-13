/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_image.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:37:18 by ade-agui          #+#    #+#             */
/*   Updated: 2021/10/13 17:03:30 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	draw_image(t_game *game, void *img, int x, int y)
{
	mlx_put_image_to_window
		(game->mlx, game->win, img, y * SPRITE_SIZE, x * SPRITE_SIZE);
}
