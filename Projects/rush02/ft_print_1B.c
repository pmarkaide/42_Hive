/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_1B.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:03:27 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/07/16 18:03:28 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "tf.h"

void	ft_print_string(int index, dict dic);

void	ft_print_1B(int *chunks, dict dic)
{
		ft_print_string(chunks[2], dic);
		write(1," ",1);
		ft_print_string(1000000000, dic);
		write(1," ",1);
}