/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_image_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:40:49 by ade-agui          #+#    #+#             */
/*   Updated: 2021/10/13 18:36:03 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	*convert_image(char *img, t_game *game)
{
	game->img = mlx_xpm_file_to_image
		(game->mlx, img, &game->img_width, &game->img_height);
	return (game->img);
}

void	initialize_image(t_game *game)
{
	game->wall = convert_image(FILE_WALL, game);
	game->empty_space = convert_image(FILE_SPACE, game);
	game->collectible = convert_image(FILE_COLLECTIBLE_1, game);
	game->exit = convert_image(FILE_EXIT, game);
	game->player_u = convert_image(FILE_PLAYER_U, game);
	game->player_d = convert_image(FILE_PLAYER_D, game);
	game->player_l = convert_image(FILE_PLAYER_L, game);
	game->player_r = convert_image(FILE_PLAYER_R, game);
}
