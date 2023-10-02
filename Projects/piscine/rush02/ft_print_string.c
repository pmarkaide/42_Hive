/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:54:03 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/07/16 15:54:04 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "tf.h"
#include <stdio.h>

void	ft_print_string(unsigned int nb, dict dic)
{
	int	l;
	int i;
	int index;

	l = 0;
	i = 0;
	index = -1;
	while (i < dic.length)
	{
		if(*dic.index[i] == nb)
		{
			index = i;
			break;
		}
		i++;
	}
	if (index != -1)
	{
		while (dic.string[index][l] != '\0')
			l++;
		write(1, dic.string[index], l);
	}
	else
        write(1,"Key not found on dict!\n", 29);
}
