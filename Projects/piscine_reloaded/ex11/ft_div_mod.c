/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaide <pmarkaid@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:01:04 by pmarkaide         #+#    #+#             */
/*   Updated: 2023/10/05 13:10:42 by pmarkaide        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 3;

    int d;
    int m;

    ft_div_mod(a, b, &d, &m);
    printf("a: %d\nb: %d\ndiv: %d\nmod: %d\n", a, b, d, m);

    return 0;
}
