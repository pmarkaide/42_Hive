/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:44:42 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/07/20 15:44:43 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while ((str[i + j] == to_find[j]) && str[i + j] != '\0')
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
		j++;
		}
	i++;
	}
	return (0);
}

char **ft_split(char *str, char *charset)
{

	


}
