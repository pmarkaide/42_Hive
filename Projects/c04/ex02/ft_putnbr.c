/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:59:18 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/07/11 12:59:19 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		putchar(nb % 10 + '0');
	}
	else
		putchar(nb % 10 + '0');
}

// int main()
// {

// 	ft_putnbr(42);
// 	write(1, "\n", 1);
// 	ft_putnbr(-42);
// 	write(1, "\n", 1);
// 	ft_putnbr(123);
// 	write(1, "\n", 1);
// 	ft_putnbr(-234);
// 	write(1, "\n", 1);
// 	ft_putnbr(1345);
// 	write(1, "\n", 1);
// 	ft_putnbr(-2147483648);
// 	write(1, "\n", 1);
// 	ft_putnbr(2147483647);
// 	write(1, "\n", 1);
// }
