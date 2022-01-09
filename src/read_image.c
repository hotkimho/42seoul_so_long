/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_image.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 20:13:29 by hkim2             #+#    #+#             */
/*   Updated: 2022/01/09 21:36:32 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <stdio.h>

t_img	get_image_ptr(t_game *game, char *image)
{
	t_img	tmp;

	tmp.img = mlx_xpm_file_to_image(game->mlx, image, &tmp.width, &tmp.height);
	return (tmp);
}

void	image_texture_init(t_game *game)
{
	game->tile = get_image_ptr(game, "texture/tile.xpm");
	game->wall = get_image_ptr(game, "texture/wall.xpm");
	game->player.img = get_image_ptr(game, "texture/player.xpm");
	game->collectible = get_image_ptr(game, "texture/ball.xpm");
}

void	image_init(t_game *game)
{
	image_texture_init(game);
}
