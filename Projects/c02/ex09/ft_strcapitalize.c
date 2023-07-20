/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:30:04 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/07/06 14:29:53 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_not_alpha;
	int	is_not_a_number;
	int	next_is_lower;

	ft_strlowcase(str);
	i = 0;
	while (str[i] != '\0')
	{
		is_not_alpha = !(str[i] >= 'a' && str[i] <= 'z');
		is_not_a_number = !(str[i] >= '0' && str[i] <= '9');
		next_is_lower = (str[i + 1] >= 'a' && str[i + 1] <= 'z');
		if (is_not_alpha && is_not_a_number && next_is_lower)
		{
			str[i + 1] = str[i + 1] - 32;
			i++;
		}
		i++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	return (str);
}
