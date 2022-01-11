/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:54:54 by hkim2             #+#    #+#             */
/*   Updated: 2022/01/11 18:47:31 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	key_up(t_game *game, char **map)
{
	int		x;
	int		y;

	x = game->player.pos.x;
	y = game->player.pos.y;
	if (map[y - 1][x] != WALL)
	{
		game->score += check_score(map, x, y - 1);
		check_after_move(game, x, y - 1);
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
		check_after_move(game, x, y + 1);
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
		check_after_move(game, x - 1, y);
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
		check_after_move(game, x + 1, y);
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
	else if (keycode == ESC)
		mlx_exit();
	mlx_draw(game);
	return (0);
}
