/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaide <pmarkaid@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:59:02 by pmarkaide         #+#    #+#             */
/*   Updated: 2023/10/11 11:18:40 by pmarkaide        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else
		ft_putchar(nb % 10 + '0');
}

void ft_is_negative(int n)
{
    if (n >= 0)
        ft_putchar('P');
    else
        ft_putchar('N');
}

void    ft_foreach(int *tab, int length, void (*f)(int))
{
    int i;
    i = 0;
    while(i < length)
    {
        f(tab[i]);
        i++;
        write(1,"\n",1);
    }
}

int main() {
    int arr[] = {1123, -22, 3632, -455, 1235};
    int length = sizeof(arr) / sizeof(arr[0]);

    ft_foreach(arr, length, &ft_putnbr);
    // the & is not needed, the function is already a pointer
    ft_foreach(arr, length, ft_is_negative);
    return 0;
}