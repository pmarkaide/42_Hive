/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_to_grid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:59:12 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/07/19 12:59:14 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int **ft_malloc_grid(int rows, int cols) {
    int **grid;
	int i;

	grid = (int **)malloc(rows * sizeof(int *));
    i = 0;
    while (i < rows) {
        grid[i] = (int *)malloc(cols * sizeof(int));
        int j = 0;
        while (j < cols) {
            grid[i][j] = 0;
            j++;
        }
        i++;
    }
    return (grid);
}

int **ft_map_to_grid(char map[12][13])
{   
	int **grid;
	grid = ft_malloc_grid(12,13);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 13; j++) {
            if (map[i][j] == 'o') {
                for (int x = i; x < 12; x++) {
                    for (int y = j; y < 13; y++) {
                        grid[x][y]++;
                    }
                }
            }
        }
    }
    return (grid);
}
