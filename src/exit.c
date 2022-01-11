/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:33:40 by hkim2             #+#    #+#             */
/*   Updated: 2022/01/11 17:07:17 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx_exit.h"

int	exit_hook(void)
{
	ft_putstr_fd("EXIT SUCCESS", 2);
	ft_putstr_fd("\n", 2);
	exit(EXIT_SUCCESS);
	return (0);
}

void	mlx_exit(void)
{
	ft_putstr_fd("EXIT SUCCESS(ESC)", 2);
	ft_putstr_fd("\n", 2);
	exit(EXIT_SUCCESS);
}

void	mlx_clear(void)
{
	ft_putstr_fd("GAME CLEAR", 2);
	ft_putstr_fd("\n", 2);
	exit(EXIT_SUCCESS);
}
