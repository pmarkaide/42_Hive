/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_edges.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:24:47 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/07/08 18:24:54 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	***find_edges(int *top, int *rig, int *dow, int *lef, int ***grid)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		if (top[i] == 4)
		{
		while (j < 4)
			grid[j][i][0] = j++ + 1;
		}
		j = 0;
		if (rig[i] == 4)
			while (j < 4){
				grid[i][j][0] = j++ + 1;
		i++;
	}
	return (grid);
}
