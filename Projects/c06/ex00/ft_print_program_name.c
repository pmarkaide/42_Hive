/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 12:00:54 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/07/13 12:00:56 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	n_args;
	int	i;

	n_args = argc;
	i = 0;
	while (argv[0][i] != '\0')
		i++;
	write(1, argv[0], i);
	write(1, "\n", 1);
}
