/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:40:22 by hkim2             #+#    #+#             */
/*   Updated: 2022/01/10 20:02:39 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <stdio.h>

void	check_wall(char **map, int row, int col)
{
	int		idx;

	idx = 0;
	while (idx < col)
	{
		if (map[0][idx] != WALL)
			error_msg("map_horizontal_wall_error");
		if (map[row - 1][idx] != WALL)
			error_msg("map_horizontal_error");
		idx++;
	}
	idx = 0;
	while (idx < row)
	{
		if (map[idx][0] != WALL)
			error_msg("map_vertical_wall_error");
		if (map[idx][col - 1] != WALL)
			error_msg("map_vertical_error");
		idx++;
	}
}

void	check_player(t_game *game, int row, int col)
{
	int		i;
	int		j;
	int		is_player;

	i = 0;
	is_player = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			if (game->map.map[i][j] == PLAYER)
			{
				is_player++;
				game->player.pos.x = j;
				game->player.pos.y = i;
			}
			if (is_player > 1)
				error_msg("map_player_error");
			j++;
		}
		i++;
	}
	if (is_player == 0)
		error_msg("map_player_error");
}

int	check_collectible(char **map, int row, int col)
{
	int		i;
	int		j;
	int		is_collectible;

	i = 0;
	is_collectible = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			if (map[i][j] == COLLECTIBLE)
				is_collectible++;
			j++;
		}
		i++;
	}
	if (is_collectible == 0)
		error_msg("map_collectible_error");
	return (is_collectible);
}

void	check_exit(char **map, int row, int col)
{
	int		i;
	int		j;
	int		is_exit;

	i = 0;
	is_exit = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			if (map[i][j] == EXIT)
				is_exit++;
			if (is_exit > 1)
				error_msg("map_exit_error");
			j++;
		}
		i++;
	}
	if (is_exit == 0)
		error_msg("map_exit_error");
}

void	check_map(t_game *game)
{
	int		col;
	int		row;

	col = game->map.col;
	row = game->map.row;
	game->target_score = check_collectible(game->map.map, row, col);
	check_wall(game->map.map, row, col);
	check_player(game, row, col);
	check_exit(game->map.map, row, col);
}
