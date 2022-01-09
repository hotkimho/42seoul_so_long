/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 20:43:06 by hkim2             #+#    #+#             */
/*   Updated: 2022/01/09 21:02:25 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_H
# define PLAYER_H
# include "image.h"

typedef struct s_position
{
	int		x;
	int		y;
}			t_position;

typedef struct s_player
{
	t_img		img;
	t_position	pos;
}				t_player;

#endif