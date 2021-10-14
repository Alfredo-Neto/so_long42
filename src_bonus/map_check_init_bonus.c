/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check_init_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:41:57 by ade-agui          #+#    #+#             */
/*   Updated: 2021/10/14 15:58:59 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	map_check_init(t_map *map)
{
	map->collectible = 0;
	map->exit = 0;
	map->player = 0;
	map->space = 0;
	map->map_row_size = 0;
	map->map_col_size = 0;
}
