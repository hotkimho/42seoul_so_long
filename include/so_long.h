/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 19:47:42 by hokim             #+#    #+#             */
/*   Updated: 2022/01/07 21:18:23 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
 
# include <stdlib.h>
# include <fcntl.h>
# include "../mlx/mlx.h"
# include "../lib/libft.h"
# include "map.h"

typedef struct s_game
{
    t_map       map;
}               t_game;
#endif