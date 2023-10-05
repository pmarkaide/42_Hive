/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaide <pmarkaid@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:23:10 by pmarkaide         #+#    #+#             */
/*   Updated: 2023/10/05 13:54:37 by pmarkaide        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb)
{

    if (nb == 0 || nb == 1)
        return (1);
    else
        nb = nb * ft_recursive_factorial(nb - 1);
    return (nb);
}

int main(int argc, char const *argv[])
{
    printf("factorial: %d\n",ft_recursive_factorial(5));
    return 0;
}
