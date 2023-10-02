/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:50:54 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/07/12 09:50:55 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	else
			nb = nb * ft_recursive_factorial(nb - 1);
	return (nb);
}
// #include <stdio.h>
// int main()
// {
// 	printf("Value: %d\n",ft_recursive_factorial(-1));
// 	printf("Value: %d\n",ft_recursive_factorial(0));
// 	printf("Value: %d\n",ft_recursive_factorial(1));
// 	printf("Value: %d\n",ft_recursive_factorial(5));
// }