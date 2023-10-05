/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaide <pmarkaid@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:37:46 by pmarkaide         #+#    #+#             */
/*   Updated: 2023/10/05 12:48:47 by pmarkaide        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}

int main(int argc, char const *argv[])
{
    int i = 10;
    printf("Old value of i: %d\n",i);
    int *p = &i;
    ft_ft(p);
    printf("New value of i: %d\n",i);
    return 0;
}
