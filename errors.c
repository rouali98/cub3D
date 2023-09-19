/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rouali <rouali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 18:15:10 by mamazzal          #+#    #+#             */
/*   Updated: 2023/09/19 11:21:15 by rouali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3D.h"

int	error_fd_not_found(char *msg)
{
	write(2, msg, ft_strlen(msg));
	exit(1);
}

int	error_map(char *msg)
{
	write(2, msg, ft_strlen(msg));
	exit(1);
}
