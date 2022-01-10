/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:53:54 by hkim2             #+#    #+#             */
/*   Updated: 2022/01/10 18:52:49 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOOK_H
# define HOOK_H

# define KEY_PRESS 2
# define KEY_RELEASE 3

# define UP	13
# define DOWN 1
# define LEFT 0
# define RIGHT 2

typedef struct s_game	t_game;

int	key_hook(int keycode, t_game *game);

#endif