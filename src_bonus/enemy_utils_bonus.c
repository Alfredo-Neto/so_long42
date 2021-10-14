/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemy_utils_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 00:37:50 by ade-agui          #+#    #+#             */
/*   Updated: 2021/10/14 18:23:00 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	is_enemy(char enemy)
{
	return (enemy == 'i' || enemy == 'j' || enemy == 'k' || enemy == 'l');
}

char	*enemy_flip(char *c)
{
	if (*c == 'k')
		*c = 'L';
	if (*c == 'l')
		*c = 'I';
	if (*c == 'i')
		*c = 'J';
	if (*c == 'j')
		*c = 'K';
	return (c);
}

void	enemy_kill(t_game *game)
{
	
}

void	enemy_translate(t_game *game)
{
	int		i;
	int		j;

	i = 0;
	while (game->map[i])
	{
		j = 0;
		while (game->map[i][j])
		{
			if (is_enemy(ft_tolower(game->map[i][j])))
				game->map[i][j] = ft_tolower(game->map[i][j]);
			j++;
		}
		i++;
	}
}
