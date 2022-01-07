/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:44:05 by hkim2             #+#    #+#             */
/*   Updated: 2022/01/07 21:19:30 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <stdio.h>

void    error_msg(char *message)
{
    ft_putstr_fd(message, 2);
    ft_putstr_fd("\n", 2);
    exit(EXIT_FAILURE);
}

int     open_file(char *filename)
{
    int     fd;
    
    if ((fd = open(filename, O_RDONLY)) < 0)
        error_msg("fileopen error");
    return (fd);
}

void    check_map(t_game *game, char *filename)
{
    int     fd;
    char    buf;
    int     checkCol;

    checkCol = 0;
    fd = open_file(filename);
    while (read(fd, &buf, 1))
    {
        if (buf == '\n')
        {
            if (checkCol != 0 && checkCol != game->map.col)
                error_msg("map check error");
            checkCol = game->map.col;
            game->map.row++;
            game->map.col = 0;
        }
        else
            game->map.col++;
    }
    close(fd);
}

void    malloc_map(t_game game)
{
    char    **ptr;
    int     col;
    int     row;

    col = game.map
    ptr = (char **) malloc(sizeof(char *) *)
}

void    map_init(t_game *game, char *filename)
{
    game->map.col = 0;
    game->map.row = 0;
    check_map(game, filename);
    
    ft_putstr_fd("정상!", 2);
    
}