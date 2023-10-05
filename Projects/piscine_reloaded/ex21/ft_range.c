/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaide <pmarkaid@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:08:08 by pmarkaide         #+#    #+#             */
/*   Updated: 2023/10/05 17:24:19 by pmarkaide        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
    if(max <= min)
        return (0);
    int *res = (int *)malloc((max - min) * sizeof(int));
    int i;
    i = 0;
    while (min + i < max)
    {
        res[i] = min + i;
        i++;
    }
    return (res);
}

int main(int argc, char const *argv[])
{
    
    int min = 6;
    int max = 10;
    int *res = ft_range(min, max);

    int range = max - min;
    int i = 0;
    while (i < range)
    {
        printf("%d ",res[i]);
        i++;
    }
    return 0;
}
