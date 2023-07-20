/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_dict.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:39:35 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/07/15 17:39:37 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_free_dict(dict* dic)
{
	if (dic == NULL) {
		return;
	}

	int	i;

	i = 0;
	while(i < dic->length )
	{
		free(dic->string[i]);
		i++;
	}
	free(dic->string);
	free(dic->index);
	dic->length = 0;
	dic->index = NULL;
	dic->string = NULL;
}
