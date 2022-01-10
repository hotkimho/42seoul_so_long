/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 20:14:11 by hkim2             #+#    #+#             */
/*   Updated: 2022/01/10 20:06:16 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMAGE_H
# define IMAGE_H

# define IMG_SIZE	32

typedef struct s_img
{
	void	*img;
	int		width;
	int		height;
}			t_img;

typedef struct s_game	t_game;

t_img	get_image_ptr(t_game *game, char *image);
void	image_texture_init(t_game *game);
void	image_init(t_game *game);

void	draw_obj(t_game *game, void *img, int x, int y);
void	mlx_draw(t_game *game);

void	draw_tile(t_game *game, int x, int y);
void	draw_player(t_game *game, int x, int y);
void	draw_wall(t_game *game, int x, int y);
void	draw_collectible(t_game *game, int x, int y);
void	draw_exit(t_game *game, int x, int y);
#endif