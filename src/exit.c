/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:33:40 by hkim2             #+#    #+#             */
/*   Updated: 2022/01/13 21:04:39 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx_exit.h"

int	exit_hook(void)
{
	ft_putstr_fd("EXIT SUCCESS", 1);
	ft_putstr_fd("\n", 1);
	exit(EXIT_SUCCESS);
	return (0);
}

void	mlx_exit(void)
{
	ft_putstr_fd("EXIT SUCCESS(ESC)", 1);
	ft_putstr_fd("\n", 1);
	exit(EXIT_SUCCESS);
}

void	mlx_clear(void)
{
	ft_putstr_fd("GAME CLEAR", 1);
	ft_putstr_fd("\n", 1);
	exit(EXIT_SUCCESS);
}
