/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:54:13 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/07/15 13:56:37 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "tf.h"
//#include "ft.h"

int	ft_atoi(char *nbr);
int **ft_split_nbr(int nbr, int **chunks);
int	**ft_create_chunks(void);
void	ft_free_chunks(int **chunks);
void	ft_print_100(int *chunks);
void	ft_print_10(int *chunks);
int	*ft_strcpy(char *dest, char *src);
dict ft_load_dict(char *dic_file);



int main(int argc, char **argv)
{
	int nbr;
	int **chunks;
	char *dic_file;
	dict dic;

	if (argc > 3 || argc == 1)
	{
		printf("Too many or few arguments\n");
		return (-1);
	}
	if (argc == 3)
	{
		printf("Loading NEW dictionary\n");
		nbr = ft_atoi(argv[2]);
		dic_file = argv[1];
	}else
	{
		printf("Loading default dictionary\n");
		nbr = ft_atoi(argv[1]);
		dic_file = "numbers.dict";
	}
	printf("nbr is: %d\n", nbr);

	chunks = ft_create_chunks();
	ft_split_nbr(nbr, chunks);

	for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", chunks[i][j]);
        }
        printf("\n");
    }

	dic = ft_load_dict(dic_file);

	// Print values in the 'index' member
    for (int i = 0; i < 32; i++) {
        printf("Index: %d\n", *dic.index[i]);
    }

    // Print values in the 'string' member
    for (int i = 0; i < 32; i++) {
        printf("String: %s\n", dic.string[i]);
    }

    // Print the value of the 'length' member
    printf("Length: %d\n", 32);
    return 0;
	ft_free_chunks(chunks);

	ft_print_100(chunks[3]);

}
