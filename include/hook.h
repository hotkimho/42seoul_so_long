/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:53:54 by hkim2             #+#    #+#             */
/*   Updated: 2022/01/11 20:05:17 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOOK_H
# define HOOK_H

# define KEY_PRESS 2
# define KEY_RELEASE 3
# define EXIT_BUTTON 17
# define ESC 53

# define UP	13
# define DOWN 1
# define LEFT 0
# define RIGHT 2

typedef struct s_game	t_game;

int		key_hook(int keycode, t_game *game);
void	key_up(t_game *game, char **map);
void	key_down(t_game *game, char **map);
void	key_left(t_game *game, char **map);
void	key_right(t_game *game, char **map);

int		check_score(char **map, int x, int y);
void	check_clear(t_game *game, int x, int y);
void	set_player(t_game *game, int x, int y);
void	print_movement(t_game *game);
void	check_after_move(t_game *game, int x, int y);

#endif