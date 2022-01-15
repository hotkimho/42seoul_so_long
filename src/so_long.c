/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 17:00:36 by hkim2             #+#    #+#             */
/*   Updated: 2022/01/15 18:08:15 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	game_init(t_game *game, char *filename)
{
	map_init(game, filename);
	game->score = 0;
	game->movement = 0;
	game->mlx = mlx_init();
	mlx_get_screen_size(game->mlx, &game->width, &game->height);
	game->win = mlx_new_window(game->mlx, game->width,
			game->height, "so_long");
	image_init(game);
	mlx_draw(game);
}

int	main(int argc, char **argv)
{
	t_game	game;

	if (argc != 2)
		error_msg("ARG ERROR");
	game_init(&game, argv[1]);
	mlx_hook(game.win, KEY_PRESS, 0, key_hook, &game);
	mlx_hook(game.win, EXIT_BUTTON, 0, exit_hook, &game);
	mlx_loop(game.mlx);
	return (0);
}
