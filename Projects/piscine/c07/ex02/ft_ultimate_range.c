/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:05:54 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/07/17 12:05:55 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	size = 0;
	while (min < max)
	{
		(*range)[size] = min;
		min++;
		size++;
	}
	return (size);
}
/*
int main(void)
{
	int result;
	int min = 1;
	int max = 5;
	int **range;
	range = malloc(sizeof(int *));
	result = ft_ultimate_range(range, min, max);
    printf("%d ", result);
    printf("\n");

}*/
