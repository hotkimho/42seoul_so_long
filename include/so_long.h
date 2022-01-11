/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 19:47:42 by hokim             #+#    #+#             */
/*   Updated: 2022/01/11 20:08:06 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdio.h>
# include <fcntl.h>
# include "../mlx/mlx.h"
# include "map.h"
# include "error.h"
# include "image.h"
# include "player.h"
# include "hook.h"
# include "mlx_exit.h"

typedef struct s_game
{
	void		*mlx;
	void		*win;
	int			width;
	int			height;
	t_map		map;
	t_player	player;
	t_img		tile;
	t_img		wall;
	t_img		collectible;
	t_img		exit;
	int			score;
	int			target_score;
	int			movement;
}				t_game;

void	game_init(t_game *game, char *filename);

#endif