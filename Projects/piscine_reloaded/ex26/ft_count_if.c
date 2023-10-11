/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaide <pmarkaid@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:20:40 by pmarkaide         #+#    #+#             */
/*   Updated: 2023/10/11 12:01:02 by pmarkaide        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int isVowel(char c){
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        return 1; // It's a vowel
    } else {
        return -1; // It's not a vowel
    }
}

int moreVowels(char *str){
    
    int i = 0;
    int t = 0;

    //0 marks the end of the string
    while(str[i] != '\0')
    {
        t +=isVowel(str[i]);
        i++;
    }
    
    if(t > 0)
        return 1;
    else
        return 0;
}

int ft_count_if(char **tab, int (*f)(char*))
{
    int i = 0;
    int t = 0;
    while(tab[i][0] != '0'){ // Use '0' as the sentinel character
        t += f(tab[i]);
        i++;
    }
    return t;
}

int main(int argc, char const *argv[])
{
    char *arr[] = {"Helooolo0", "World0", "Hiveeee0", "Tesst0", "1230", "0"};
    int result = ft_count_if(arr, moreVowels);
    printf("Number of strings with more vowels: %d\n", result);
    return 0;
}
