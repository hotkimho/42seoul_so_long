/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:41:22 by hkim2             #+#    #+#             */
/*   Updated: 2022/01/15 17:56:29 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "error.h"

void	error_msg(char *message)
{
	ft_putstr_fd("error\n", 2);
	ft_putstr_fd(message, 2);
	ft_putstr_fd("\n", 2);
	exit(EXIT_FAILURE);
}
