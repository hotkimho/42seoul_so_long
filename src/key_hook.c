/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:54:54 by hkim2             #+#    #+#             */
/*   Updated: 2022/01/10 20:34:06 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <stdio.h>

int	check_score(char **map, int x, int y)
{
	if (map[y][x] == COLLECTIBLE)
	{
		printf("+%d점\n", 1);
		return (1);
	}
	return (0);
}

void	check_clear(t_game *game, int x, int y)
{
	if (game->map.map[y][x] == EXIT)
		if (game->score == game->target_score)
			printf("game clear\n");
}
void	set_player(t_game *game, int x, int y)
{
	game->player.pos.x = x;
	game->player.pos.y = y;
	game->map.map[y][x] = PLAYER;
}

void	key_up(t_game *game, char **map)
{
	int		x;
	int		y;

	x = game->player.pos.x;
	y = game->player.pos.y;
	if (map[y - 1][x] != WALL)
	{
		game->score += check_score(map, x, y - 1);
		check_clear(game, x, y - 1);
		set_player(game, x, y - 1);
		game->map.map[y][x] = TILE;
	}
}

void	key_down(t_game *game, char **map)
{
	int		x;
	int		y;

	x = game->player.pos.x;
	y = game->player.pos.y;
	if (map[y + 1][x] != WALL)
	{
		game->score += check_score(map, x, y + 1);
		check_clear(game, x, y + 1);
		set_player(game, x, y + 1);
		game->map.map[y][x] = TILE;
	}
}

void	key_left(t_game *game, char **map)
{
	int		x;
	int		y;

	x = game->player.pos.x;
	y = game->player.pos.y;
	if (map[y][x - 1] != WALL)
	{
		game->score += check_score(map, x - 1, y);
		check_clear(game, x - 1, y);
		set_player(game, x - 1, y);
		game->map.map[y][x] = TILE;
	}
}

void	key_right(t_game *game, char **map)
{
	int		x;
	int		y;

	x = game->player.pos.x;
	y = game->player.pos.y;
	if (map[y][x + 1] != WALL)
	{
		game->score += check_score(map, x + 1, y);
		check_clear(game, x + 1, y);
		set_player(game, x + 1, y);
		game->map.map[y][x] = TILE;
	}
}
int	key_hook(int keycode, t_game *game)
{
	if (keycode == UP)
		key_up(game, game->map.map);
	else if (keycode == DOWN)
		key_down(game, game->map.map);
	else if (keycode == LEFT)
		key_left(game, game->map.map);
	else if (keycode == RIGHT)
		key_right(game, game->map.map);
	printf("키가 눌렸다\n");
	mlx_draw(game);
	return (0);
}
