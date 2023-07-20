/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 19:22:38 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/07/19 19:22:43 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_H
#define PRINT_H

void ft_print_grid(int **grid, int rows, int cols);
void ft_print_map(char **map, int rows, int cols);
void ft_free_grid(int **grid, int rows);
void ft_free_map(char **map, int rows);

#endif

#include <stdio.h>

void	ft_print_grid(int **grid, int rows, int cols)
{
	int	i = 0;
	while (i < rows) {
		int j = 0;
		while (j < cols) {
			printf("%d ", grid[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}

void	ft_print_map(char **map, int rows, int cols)
{
	int	i = 0;
	while (i < rows) {
		int j = 0;
		while (j < cols) {
			printf("%c", map[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}
