/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaide <pmarkaid@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:55:44 by pmarkaide         #+#    #+#             */
/*   Updated: 2023/10/05 14:08:14 by pmarkaide        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_sqrt(int nb)
{
    int i = 1;
    while (i < nb )
    {
        if(i*i == nb)
            return i;
        else
            i++;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    printf("sqtr: %d",ft_sqrt(25));
    return 0;
}
