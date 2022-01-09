/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 19:47:42 by hokim             #+#    #+#             */
/*   Updated: 2022/01/09 21:30:10 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdlib.h>
# include <fcntl.h>
# include "../mlx/mlx.h"
# include "../lib/libft.h"
# include "map.h"
# include "error.h"
# include "image.h"
# include "player.h"

typedef struct s_game
{
	void		*mlx;
	void		*win;
	t_map		map;
	t_player	player;
	t_img		tile;
	t_img		wall;
	t_img		collectible;
}				t_game;

void	mlx_draw(t_game *game);
void	draw_obj(t_game *game, void *img, int x, int y);
#endif