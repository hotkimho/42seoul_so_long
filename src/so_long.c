/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hokim <hokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 17:00:36 by hokim             #+#    #+#             */
/*   Updated: 2022/01/06 20:38:27 by hokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <stdio.h>
int main() 
{
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

    return (0);
}