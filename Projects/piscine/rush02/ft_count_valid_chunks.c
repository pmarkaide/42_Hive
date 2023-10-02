/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_valid_chunks.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:51:41 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/07/16 17:51:42 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_valid_chunks(unsigned int nbr)
{
	int	c;

	c = 0;
	if (nbr > 1000000000)
		c = 4;
	else if (nbr > 1000000)
		c = 3;
	else if (nbr > 1000000)
		c = 2;
	else
		c = 1;
	return (c);
}
