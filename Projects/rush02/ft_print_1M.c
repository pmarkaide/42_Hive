/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_1M.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:09:29 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/07/16 18:09:30 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "tf.h"

void	ft_print_string(int index, dict dic);

void	ft_print_100(int *chunks, dict dic);

void	ft_print_1M(int *chunks, dict dic)
{
		ft_print_100(chunks, dic);
		write(1," ",1);
		ft_print_string(1000000, dic);
		write(1," ",1);
}
