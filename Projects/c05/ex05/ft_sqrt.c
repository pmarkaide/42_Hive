/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 09:39:55 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/07/13 09:39:56 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb > 2147395600)
	{
		return (0);
	}
	while (i * i <= nb)
	{
		if (i * i == nb)
		{
			return (i);
		}
		else
		{
			i++;
		}
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("Value: %d\n",ft_sqrt(-795));
	printf("Value: %d\n",ft_sqrt(2147483647));
	printf("Value: %d\n",ft_sqrt(-2147483648));
	printf("Value: %d\n",ft_sqrt(1000000));
	printf("Value: %d\n",ft_sqrt(9));
}*/