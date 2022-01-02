/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hokim <hokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 17:00:36 by hokim             #+#    #+#             */
/*   Updated: 2022/01/02 19:56:11 by hokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main() 
{
    void *mlx_ptr;
    void *win_ptr;

    mlx_ptr = mlx_init();
    win_ptr = mlx_new_window(mlx_ptr, 500, 500, "hello");
    mlx_loop(mlx_ptr);
    return (0);
}