/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:50:29 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/07/11 17:50:31 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	if (nb > 0)
	{
		while (nb > 0)
		{
			res = res * nb;
			nb--;
		}
	}
	return (res);
}

// #include <stdio.h>
// int main()
// {
// 	printf("Value: %d\n",ft_iterative_factorial(-1));
// 	printf("Value: %d\n",ft_iterative_factorial(0));
// 	printf("Value: %d\n",ft_iterative_factorial(1));
// 	printf("Value: %d\n",ft_iterative_factorial(5));
// }