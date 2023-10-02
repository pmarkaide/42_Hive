/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 18:18:54 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/07/19 18:19:16 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_malloc_map(int rows, int cols) {
	char	**map = (char **)malloc(rows * sizeof(char *));
	int	i = 0;
	while (i < rows)
	{
		map[i] = (char *)malloc(cols * sizeof(char));
		int j = 0;
		while (j < cols) {
			map[i][j] = '.';
			j++;
		}
		i++;
	}
	return (map);
}
