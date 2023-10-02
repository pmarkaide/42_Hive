/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_100.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:17:07 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/07/15 13:17:09 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "tf.h"

void	ft_print_string(int index, dict dic);

void	ft_print_100(int *chunks, dict dic)
{
	if (chunks[0] != 0)
	{
		ft_print_string(chunks[0], dic);
		write(1," ",1);
		ft_print_string(100, dic);
		write(1," ",1);
	}
	if (chunks[1] >= 2)
	{
		ft_print_string(chunks[1] * 10, dic);
		write(1," ",1);
	}
	if (chunks[1] == 1)
	{
		ft_print_string(chunks[2] + 10, dic);
		write(1," ",1);
	}
	if (chunks[2] != 0)
	{
		ft_print_string(chunks[2], dic);
	}
}
