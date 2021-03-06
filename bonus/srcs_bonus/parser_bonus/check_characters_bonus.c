/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_characters_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 17:42:08 by ael-khni          #+#    #+#             */
/*   Updated: 2022/01/12 09:10:41 by ael-khni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes_bonus/so_long_bonus.h"

int	in_set(char c)
{
	char	*set;
	int		i;

	i = 0;
	set = "10CEPX";
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

int	check_characters(t_program game)
{
	int	row;
	int	col;
	int	player;

	row = 0;
	player = 0;
	while (game.map.map[row] != NULL)
	{
		col = 0;
		while (game.map.map[row][col] != '\n' && game.map.map[row][col] != '\0')
		{
			if (game.map.map[row][col] == 'P')
				player++;
			if (!in_set(game.map.map[row][col]) || player > 1)
			{
				if (player > 1)
					return (2);
				return (0);
			}
			col++;
		}
		row++;
	}
	return (1);
}
