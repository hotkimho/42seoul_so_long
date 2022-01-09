/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:40:22 by hkim2             #+#    #+#             */
/*   Updated: 2022/01/09 19:09:44 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <stdio.h>
/*
지도는 벽으로 둘러쌓여 있어야 합니다. 그렇지 않으면 에러를 반환해야 합니다.
지도는 최소한 하나의 출구, 하나의 물고기 (수집품), 하나의 시작 지점을 포함해야 합니다.
지도에서 출구로 가는 길의 유무 판단 (검증)은 굳이 해주지 않으셔도 됩니다.
지도는 반드시 직사각형 모양이어야 합니다.
*/
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

void	check_player(char **map, int row, int col)
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
			if (map[i][j] == PLAYER)
				is_player++;
			if (is_player > 1)
				error_msg("map_player_error");
			j++;
		}
		i++;
	}
	if (is_player == 0)
		error_msg("map_player_error");
}

void	check_collectible(char **map, int row, int col)
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
	check_wall(game->map.map, row, col);
	check_player(game->map.map, row, col);
	check_collectible(game->map.map, row, col);
	check_exit(game->map.map, row, col);
}
