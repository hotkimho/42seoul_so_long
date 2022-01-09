/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 21:10:20 by hkim2             #+#    #+#             */
/*   Updated: 2022/01/09 21:34:39 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	draw_obj(t_game *game, void *img, int x, int y)
{
	void	*mlx;
	void	*win;

	mlx = game->mlx;
	win = game->win;
	mlx_put_image_to_window(mlx, win, img, x * IMG_SIZE, y * IMG_SIZE);
}

void	mlx_draw(t_game *game)
{
	int		x;
	int		y;

	y = 0;
	while (y < game->map.row)
	{
		x = 0;
		while (x < game->map.col)
		{
			if (game->map.map[y][x] == WALL)
				draw_obj(game, game->wall.img, x, y);
			if (game->map.map[y][x] == TILE)
				draw_obj(game, game->tile.img, x, y);
			if (game->map.map[y][x] == PLAYER)
				draw_obj(game, game->player.img.img, x, y);
			if (game->map.map[y][x] == COLLECTIBLE)
				draw_obj(game, game->collectible.img, x, y);
			x++;
		}
		y++;
	}
}
