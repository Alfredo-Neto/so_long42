/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:45:02 by ade-agui          #+#    #+#             */
/*   Updated: 2021/10/13 17:03:55 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_game	game;

	if (argc == 2)
	{
		game.map = read_map(argv[1]);
		if (is_valid_map(game.map, argv[1]))
		{
			init_game(&game);
			event_handler(&game);
			mlx_loop(game.mlx);
		}
		else
		{
			printf("Error\n This map is not valid!");
			free_map(game.map);
			exit(0);
		}
	}
	else
	{
		printf("No map specified!");
		exit(0);
	}
}
