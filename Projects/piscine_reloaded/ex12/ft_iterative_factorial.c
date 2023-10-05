/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaide <pmarkaid@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:13:09 by pmarkaide         #+#    #+#             */
/*   Updated: 2023/10/05 13:20:55 by pmarkaide        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
    int res;
    res = 1;
    while(nb > 1)
    {
        res = res * nb;
        nb--;
    }
    return res;
}

int main(int argc, char const *argv[])
{
    printf("res: %d",ft_iterative_factorial(4));
    return 0;
}
