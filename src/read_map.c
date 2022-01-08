/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:44:05 by hkim2             #+#    #+#             */
/*   Updated: 2022/01/08 18:24:47 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <stdio.h>

void	error_msg(char *message)
{
	ft_putstr_fd(message, 2);
	ft_putstr_fd("\n", 2);
	exit(EXIT_FAILURE);
}

int	open_file(char *filename)
{
	int		fd;	

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		error_msg("fileopen error");
	return (fd);
}

void	check_map(t_game *game, char *filename)
{
	int		fd;
	char	buf;
	int		check_col;

	check_col = 0;
	fd = open_file(filename);
	while (read(fd, &buf, 1))
	{
		if (buf == '\n')
		{
			if (check_col != 0 && check_col != game->map.col)
				error_msg("map check error");
			check_col = game->map.col;
			game->map.row++;
			game->map.col = 0;
		}
		else
			game->map.col++;
	}
	if (game->map.col < check_col)
		error_msg("map check error");
	close(fd);
}

void	malloc_map(t_game *game)
{
	char	**ptr;
	int		col;
	int		row;
	int		idx;

	col = game->map.col;
	row = game->map.row;
	ptr = (char **) malloc(sizeof(char *) * row);
	if (!ptr)
		error_msg("map malloc error");
	idx = 0;
	while (idx < row)
	{
		ptr[idx] = (char *) malloc(sizeof(char) * col);
		if (!ptr[idx])
			error_msg("map malloc error");
		idx++;
	}
	game->map.map = ptr;
}

void	read_map(t_game *game, char *filename)
{
	int		fd;

	fd = open_file(filename);
	

}

void	map_init(t_game *game, char *filename)
{
	game->map.col = 0;
	game->map.row = 1;
	check_map(game, filename);
	malloc_map(game);
	ft_putstr_fd("정상!", 2);
}
