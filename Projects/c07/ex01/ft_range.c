/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 10:02:49 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/07/17 10:02:50 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	range = malloc(sizeof(int) * (max - min));
	if (range == NULL)
		return (0);
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
/*
int main(void)
{
	int *result;
	int min = 1;
	int max = 11;
	result = ft_range(min, max);

    for (int i = 0; i < max - min; i++)
    {
        printf("%d ", result[i]);
    }
    printf("\n");

}*/