/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 17:00:36 by hkim2             #+#    #+#             */
/*   Updated: 2022/01/09 21:31:27 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <stdio.h>

void	game_init(t_game *game, char *filename)
{
	map_init(game, filename);
	game->mlx = mlx_init();
	game->win = mlx_new_window(game->mlx, 1080, 720, "hello");
	image_init(game);
	mlx_draw(game);
}

int	main(int argc, char **argv)
{
	t_game	game;

	argc = 0;
	game_init(&game, argv[1]);
	mlx_loop(game.mlx);
	return (0);
}
