/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_obj.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 17:58:46 by hkim2             #+#    #+#             */
/*   Updated: 2022/01/10 20:20:37 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	draw_tile(t_game *game, int x, int y)
{
	draw_obj(game, game->tile.img, x, y);
}

void	draw_player(t_game *game, int x, int y)
{
	draw_tile(game, x, y);
	draw_obj(game, game->player.img.img, x, y);
}

void	draw_wall(t_game *game, int x, int y)
{
	draw_tile(game, x, y);
	draw_obj(game, game->wall.img, x, y);
}

void	draw_collectible(t_game *game, int x, int y)
{
	draw_tile(game, x, y);
	draw_obj(game, game->collectible.img, x, y);
}

void	draw_exit(t_game *game, int x, int y)
{
	draw_tile(game, x, y);
	draw_obj(game, game->wall.img, x, y);
}
