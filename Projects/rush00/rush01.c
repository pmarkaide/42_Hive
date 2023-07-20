/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 11:45:11 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/07/02 16:56:23 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char c);

void	ft_print_line(char b, char m, char e, int x)
{
	int	i;

	i = 0;
	ft_putchar(b);
	while (i < x)
	{
		ft_putchar(m);
		i++;
	}
	if (x >= 0)
	{
		ft_putchar(e);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	row_pos;
	int	num_filler;

	if (x <= 0 || y <= 0)
	{
		write(1, "Use positive numbers'\n'", 20);
		return ;
	}
	num_filler = x - 2;
	row_pos = 1;
	ft_print_line('/', '*', '\\', num_filler);
	while (row_pos <= y)
	{
		if (row_pos > 2)
		{
			ft_print_line('*', ' ', '*', num_filler);
		}
		row_pos++;
	}
	if (y != 1)
	{
		ft_print_line('\\', '*', '/', num_filler);
	}
}
