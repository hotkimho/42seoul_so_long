/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:49:01 by hkim2             #+#    #+#             */
/*   Updated: 2022/01/07 19:34:03 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

typedef struct s_map
{
    int         col;
    int         row;
    char        *map_name;
    char        **map;
}               t_map;

typedef struct s_game   t_game;
void        map_init(t_game *game, char *filename);
int         open_file(char *filename);


#endif