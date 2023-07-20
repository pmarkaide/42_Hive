/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 09:30:45 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/07/13 09:30:46 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	res;

	res = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index >= 1)
		res = (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (res);
}
// #include <stdio.h>
// int main()
// {
// 	printf("Value: %d\n",ft_fibonacci(0));
// 	printf("Value: %d\n",ft_fibonacci(1));
// 	printf("Value: %d\n",ft_fibonacci(3));
// 	printf("Value: %d\n",ft_fibonacci(7));
// 	printf("Value: %d\n",ft_fibonacci(10));
// }