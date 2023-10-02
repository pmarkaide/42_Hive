/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:48:16 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/07/13 17:48:17 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	a;

	i = 0;
	a = argc -1;
	while (a > 0)
	{
		i = 0;
		while (argv[a][i] != '\0')
			i++;
		write(1, argv[a], i);
		write(1, "\n", 1);
		a--;
	}
}
