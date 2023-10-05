/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaide <pmarkaid@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:59:22 by pmarkaide         #+#    #+#             */
/*   Updated: 2023/10/05 16:11:52 by pmarkaide        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char const *argv[])
{
    int a;
    int j;
    a = 1;
    j = 0;
    while (a < argc)
    {
        while(argv[a][j] != '\0')
            j++;
        write(1, argv[a], j);
        write(1,"\n",1);
        a++;
    }
}
