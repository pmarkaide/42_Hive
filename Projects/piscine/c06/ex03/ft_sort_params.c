/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 08:39:16 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/07/14 08:39:18 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap_next_string_pos(char **str, int pos)
{
	char	*tmp;

	tmp = str[pos];
	str[pos] = str[pos + 1];
	str[pos + 1] = tmp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] > '\0' || s2[i] > '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

void	ft_print_params(int argc, char **argv)
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

int	main(int argc, char **argv)
{
	int	a;

	a = 1;
	while (a < argc -1)
	{
		if (ft_strcmp(argv[a], argv[a + 1]) > 0)
		{
			ft_swap_next_string_pos(argv, a);
			a = 0;
		}
		a++;
	}
	ft_print_params(argc, argv);
}
