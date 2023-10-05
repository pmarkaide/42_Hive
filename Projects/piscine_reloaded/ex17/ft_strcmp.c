/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaide <pmarkaid@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:52:13 by pmarkaide         #+#    #+#             */
/*   Updated: 2023/10/05 16:35:32 by pmarkaide        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int main(int argc, char const *argv[])
{
    printf("%d",ft_strcmp("test2","test1"));
    return 0;
}
