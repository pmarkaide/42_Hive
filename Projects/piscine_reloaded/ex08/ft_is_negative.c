/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaide <pmarkaid@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:31:27 by pmarkaide         #+#    #+#             */
/*   Updated: 2023/10/05 12:36:49 by pmarkaide        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}

void ft_is_negative(int n)
{
    if (n >= 0)
        ft_putchar('P');
    else
        ft_putchar('N');
}

int main(int argc, char const *argv[])
{
    ft_is_negative(-5);
    ft_is_negative(0);
    ft_is_negative(5);
    return 0;
}
