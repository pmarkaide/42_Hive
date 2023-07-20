/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:25:04 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/07/13 11:25:05 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	c;
	int	i;

	c = 0;
	i = 1;
	if (ft_is_prime(nb) == 1)
		return (nb);
	while (c != 1)
	{	
		if (ft_is_prime(nb + i) == 0)
			i++;
		else
			c = 1;
	}
	return (nb + i);
}
/*
#include <stdio.h>
int main()
{
	printf("Next prime: %d\n",ft_find_next_prime(27749));
	printf("Next prime: %d\n",ft_find_next_prime(27750));
	printf("Next prime: %d\n",ft_find_next_prime(2147483644));
	printf("Next prime: %d\n",ft_find_next_prime(2147483645));
	printf("Next prime: %d\n",ft_find_next_prime(2147483646));
	printf("Next prime: %d\n",ft_find_next_prime(2147483647));
}*/
