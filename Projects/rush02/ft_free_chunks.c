/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_chunks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:43:03 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/07/15 13:43:04 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_free_chunks(int **chunks)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		free(chunks[i]);
		i++;
	}
	free(chunks);
}
