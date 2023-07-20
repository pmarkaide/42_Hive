/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_chunks.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:36:37 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/07/15 13:36:38 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	**ft_create_chunks(void)
{
	int	**chunks;
	int	row;

	chunks = (int **)malloc(4 * sizeof(int *));
	row = 0;
	while (row < 4)
	{
		chunks[row] = (int *)malloc(3 * sizeof(int));
		row++;
	}
	return (chunks);
}
