/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 09:54:03 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/07/18 09:54:05 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char **argv)
{
	char	**array_of_maps;
	int		**grid;
	int		*best;
	int		i;

	if (argc == 1)
		array_of_maps[0] = ft_read_stdin();
	if (argc >= 1)
		array_of_maps = ft_read_all_maps();
	i = 0;
	while (i < argc)
	{
		if (ft_is_map_valid(array_of_maps[i] == 1))
		{
			grid = ft_map_to_grid(array_of_maps[i]);
			best = ft_solve_grid(grid);
			ft_print_map(array_of_maps[i], best);
			ft_free_map_grid_best(array_of_maps[i], grid);
		}
		i++;
	}
}
