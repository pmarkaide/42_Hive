/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:38:45 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/07/05 12:38:49 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	n;
	int	i;
	int	tmp;

	n = size / 2;
	i = 0;
	while (i < n)
	{
		tmp = tab[size - 1];
		tab[size -1] = tab[i];
		tab[i] = tmp;
		i++;
		size--;
	}
}
