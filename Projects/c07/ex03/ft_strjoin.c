/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:52:52 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/07/20 10:52:53 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
// #include <stdio.h>
// #include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] > '\0')
	{	
		i++;
	}
	j = 0;
	while (src[j] > '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total_len;
	char	*res;

	if (size == 0)
		return ("");
	i = 0;
	total_len = 0;
	while (i < size)
		total_len += ft_strlen(strs[i++]);
	total_len += (size - 1) * ft_strlen(sep);
	res = (char *)malloc((total_len + 1) * sizeof(char));
	if (res == NULL)
		return (res = "");
	ft_strcpy(res, strs[0]);
	i = 1;
	while (i < size)
	{
		ft_strcat(res, sep);
		ft_strcat(res, strs[i]);
		i++;
	}
	return (res);
}
/*
int main(int argc, char **argv)
{
    if (argc < 2)
        return 1;

    // The last argument is considered as the separator.
    char *sep = argv[argc - 1];

    // Number of strings provided as arguments (excluding the separator).
    int num_strings = argc - 2;

    // Allocate memory for the strings array.
    char **strings = (char **)malloc(num_strings * sizeof(char *));

    if (strings == NULL)
    {
        perror("Memory allocation failed");
        return 1;
    }

    // Copy the provided strings to the strings array.
    for (int i = 0; i < num_strings; i++)
    {
        strings[i] = ft_strcpy((char *)malloc((strlen(argv[i + 1]) + 1)\
		* sizeof(char)), argv[i + 1]);
    }

    // Call ft_strjoin with the provided arguments.
    char *result = ft_strjoin(num_strings, strings, sep);

    // Print the result.
    printf("Result: %s\n", result);

    // Free the dynamically allocated memory.
    for (int i = 0; i < num_strings; i++)
    {
        free(strings[i]);
    }
    free(strings);
    free(result);

    return 0;
}*/
