/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:53:23 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/07/13 10:53:25 by pmarkaid         ###   ########.fr       */
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
/*
#include <stdio.h>
int main()
{
	printf("Is prime? %d\n",ft_is_prime(0));
	printf("Is prime? %d\n",ft_is_prime(1));
	printf("Is prime? %d\n",ft_is_prime(2));
	printf("Is prime? %d\n",ft_is_prime(5));
	printf("Is prime? %d\n",ft_is_prime(6));
	printf("Is prime? %d\n",ft_is_prime(12));
	printf("Is prime? %d\n",ft_is_prime(101));
	printf("Is prime? %d\n",ft_is_prime(167));
	printf("Is prime? %d\n",ft_is_prime(199));
	printf("Is prime? %d\n",ft_is_prime(2147483647));

}*/