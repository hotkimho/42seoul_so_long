/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 17:00:36 by hkim2             #+#    #+#             */
/*   Updated: 2022/01/07 21:08:04 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <stdio.h>



void    game_init(t_game *game, char *filename)
{
    map_init(game, filename);
}

int main(int argc, char **argv) 
{
    t_game      game;
    
    argc = 0;
    game_init(&game, argv[1]);
    
    /*
    void *mlx_ptr;
    void *win_ptr;
    void *img_ptr;
    void *img2_ptr;

    char *img = "texture/tile.xpm";
    char *img2 = "texture/wall.xpm";

    int width = 300;
    int height = 300;
    mlx_ptr = mlx_init();
    win_ptr = mlx_new_window(mlx_ptr, 256,256, "hello");

    img_ptr = mlx_xpm_file_to_image(mlx_ptr, img, &width, &height);
    img2_ptr = mlx_xpm_file_to_image(mlx_ptr, img2, &width, &height);

    mlx_put_image_to_window(mlx_ptr, win_ptr, img_ptr, 0,0);
    mlx_put_image_to_window(mlx_ptr, win_ptr, img2_ptr, 32,0);
    mlx_put_image_to_window(mlx_ptr, win_ptr, img2_ptr, 64,0);
    printf("%s\n", (char *)img_ptr);
    mlx_loop(mlx_ptr);
    */
    
    //printf("%s %s", argv[1], argv[2]);
    
    return (0);
}