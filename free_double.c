/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_double.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rouali <rouali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:29:57 by mamazzal          #+#    #+#             */
/*   Updated: 2023/09/19 11:21:17 by rouali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3D.h"

void	free_double(char **array)
{
	int	count;

	count = 0;
	while (array[count])
	{
		free(array[count]);
		count++;
	}
	free(array);
}
