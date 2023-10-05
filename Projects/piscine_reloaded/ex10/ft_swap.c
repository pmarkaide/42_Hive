/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaide <pmarkaid@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:49:42 by pmarkaide         #+#    #+#             */
/*   Updated: 2023/10/05 12:59:35 by pmarkaide        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, char const *argv[])
{
    int va = 5;
    int vb = 10;
    int *a = &va;
    int *b = &vb;

    printf("Old value of a: %d\nOld value of b: %d\n",*a, *b);
    ft_swap(a,b);
    printf("New value of a: %d\nNew value of b: %d\n",*a, *b);
    return 0;
}
