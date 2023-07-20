/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:19:41 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/07/15 13:19:42 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_split_nbr(int nbr, int **chunks)
{
	int	row;
	int	column;

	row = 3;
	column = 2;
	while (nbr > 0 && row >= 0 && column >= 0)
	{
		chunks[row][column] = nbr % 10;
		nbr /= 10;
		column--;
		if (column < 0)
		{
			column = 2;
			row--;
		}
	}
	chunks[0][0] = 0;
	chunks[0][1] = 0;
}
