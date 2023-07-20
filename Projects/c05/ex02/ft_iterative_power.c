/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:42:26 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/07/12 10:42:27 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	else
	{
		while (power > 0)
		{
			res = res * nb;
			power--;
		}
	}
	return (res);
}
// #include <stdio.h>
// int main()
// {
// 	printf("Value: %d\n",ft_iterative_power(-1,0));
// 	printf("Value: %d\n",ft_iterative_power(0,0));
// 	printf("Value: %d\n",ft_iterative_power(1,3));
// 	printf("Value: %d\n",ft_iterative_power(2,3));
// 	printf("Value: %d\n",ft_iterative_power(5,4));
// }