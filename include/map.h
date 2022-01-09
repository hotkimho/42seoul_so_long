/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:49:01 by hkim2             #+#    #+#             */
/*   Updated: 2022/01/09 21:37:46 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

# define TILE	48
# define WALL	49
# define COLLECTIBLE	'C'
# define EXIT	'E'
# define PLAYER	'P'

typedef struct s_map
{
	int		col;
	int		row;
	char	*map_name;
	char	**map;
}			t_map;

typedef struct s_game	t_game;

void	map_init(t_game *game, char *filename);
int		open_file(char *filename);
void	cal_map_size(t_game *game, char *filename);
void	malloc_map(t_game *game);
void	read_map(t_game *game, char *filename);

void	check_wall(char **map, int row, int col);
void	check_map(t_game *game);
#endif