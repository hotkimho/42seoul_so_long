/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook_util.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:51:07 by hkim2             #+#    #+#             */
/*   Updated: 2022/01/11 18:28:35 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_score(char **map, int x, int y)
{
	if (map[y][x] == COLLECTIBLE)
		return (1);
	return (0);
}

void	check_clear(t_game *game, int x, int y)
{
	if (game->map.map[y][x] == EXIT)
		if (game->score == game->target_score)
			mlx_clear();
}

void	set_player(t_game *game, int x, int y)
{
	game->player.pos.x = x;
	game->player.pos.y = y;
	game->map.map[y][x] = PLAYER;
}

void	print_movement(t_game *game)
{
	ft_putstr_fd("number of movement: ", 2);
	ft_putnbr_fd(++game->movement, 2);
	ft_putchar_fd('\n', 2);
}

void	check_after_move(t_game *game, int x, int y)
{
	int		cur_x;
	int		cur_y;

	cur_x = game->player.pos.x;
	cur_y = game->player.pos.y;
	check_clear(game, x, y);
	if (game->map.map[y][x] == EXIT)
		return ;
	set_player(game, x, y);
	game->map.map[cur_y][cur_x] = TILE;
	print_movement(game);
}
