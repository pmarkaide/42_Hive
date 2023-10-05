/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaide <pmarkaid@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:12:45 by pmarkaide         #+#    #+#             */
/*   Updated: 2023/10/05 16:45:27 by pmarkaide        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;
    i = 0;
    while(s1[i] != '\0')
    {
        if(s1[i] == s2[i])
            i++;
        else
            return (s1[i] - s2[i]);
    }
    return 0;
}

void	ft_swap_next_string_pos(char **str, int pos)
{
	char	*tmp;

	tmp = str[pos];
	str[pos] = str[pos + 1];
	str[pos + 1] = tmp;
}

void ft_print_params(int argc, char *argv[]){
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

int main(int argc, char *argv[])
{
    int a;
    a = 1;
    while (a < argc - 1)
    {
        if(ft_strcmp(argv[a], argv[a + 1]) > 0)
        {
            ft_swap_next_string_pos(argv, a);
            a = 0;
        }
        a++;
    }
    ft_print_params(argc, argv);
    return 0;
}


