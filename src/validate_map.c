/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:45:27 by ade-agui          #+#    #+#             */
/*   Updated: 2021/10/13 15:15:17 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	is_valid_map(char **map, char *file)
{
	t_map	mp;

	if (!map)
		return (0);
	map_check_init(&mp);
	if (has_valid_walls(map, &mp) && has_valid_chars(map)
		&& has_minimum_chars(map, &mp) && is_rectangular(map)
		&& has_valid_extension(file))
		return (1);
	return (0);
}
