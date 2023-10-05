/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaide <pmarkaid@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:46:59 by pmarkaide         #+#    #+#             */
/*   Updated: 2023/10/05 17:07:02 by pmarkaide        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
    int i;
    i = 0;
    while(src[i] != '\0')
        i++;
    char *dup = (char*)malloc(i * sizeof(char));
    if (dup == NULL)
        return ("Error allocating the memory!\n");
    else
    {
        i = 0;
        while(src[i] != '\0')
        {
            dup[i] = src[i];
            i++;
        }
    }
    
    return (dup);
}

int main(int argc, char const *argv[])
{
    printf("%s",ft_strdup("Testing"));
    return 0;
}
