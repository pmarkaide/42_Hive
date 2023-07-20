/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 12:15:46 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/07/13 12:15:47 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	n_args;
	int	i;
	int	a;

	n_args = argc;
	i = 0;
	a = 1;
	while (a < n_args)
	{
		i = 0;
		while (argv[a][i] != '\0')
			i++;
		write(1, argv[a], i);
		write(1, "\n", 1);
		a++;
	}
}
