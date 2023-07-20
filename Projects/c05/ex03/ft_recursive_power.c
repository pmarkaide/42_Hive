/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:58:11 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/07/12 10:58:13 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0 || (power == 0 && nb == 0))
		return (1);
	else
			nb = nb * ft_recursive_power(nb, power - 1);
	return (nb);
}
// #include <stdio.h>
// int main()
// {
// 	printf("Value: %d\n",ft_recursive_power(1,-3));
// 	printf("Value: %d\n",ft_recursive_power(0,0));
// 	printf("Value: %d\n",ft_recursive_power(1,3));
// 	printf("Value: %d\n",ft_recursive_power(2,3));
// 	printf("Value: %d\n",ft_recursive_power(5,4));
// }
